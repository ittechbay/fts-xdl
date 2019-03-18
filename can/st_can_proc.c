#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <sqlite3.h>
#include "st_config.h"
#include "st_can.h"

typedef struct _thread_recv_data_t {
	int nID;
	int protocal;
} thread_recv_data_t;

void db_store_pwr(int nID, char *buf)
{
//create table data_pwr(id integer primary key asc, timestamp integer, nID integer, boardtype integer, flag integer, current_size integer);
//2.	create table data_pwr(id integer primary key asc, timestamp integer, nID integer, boardtype integer, flag integer, period integer, current_size integer
	sqlite3 *db;
	int rc;
	int flag;


	sqlite3_stmt *pStmt;
#if 0
    char *sql = "update data_pwr set timestamp=? where nID=?";
     //rc = sqlite3_prepare(db, sql, -1, &pStmt, 0);
rc = sqlite3_open(ST_DATABASE_FILE_NAME, &db);	
    rc = sqlite3_prepare(db, sql, -1, &pStmt, 0);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot prepare statement: %s\n", sqlite3_errmsg(db));
        return 1;
    }    
    
	time_t tt = time(NULL);
	sqlite3_bind_int(pStmt, 1, tt);
	sqlite3_bind_int(pStmt, 2, nID); //nID
    	rc = sqlite3_step(pStmt);
    
    if (rc != SQLITE_DONE) {
        printf("execution failed: %s", sqlite3_errmsg(db));
    }
        
    sqlite3_finalize(pStmt);    
    sqlite3_close(db);
#endif
#if 1
	rc = sqlite3_open(ST_DATABASE_FILE_NAME, &db);
	if( rc )
	{
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	sqlite3_stmt *stmt_update = 0;
	sqlite3_prepare(db, "UPDATE data_pwr SET timestamp = ? ,boardtype=? ,  flag=? , period=?, current=? WHERE nID = ?", -1, &stmt_update, 0);
	//sqlite3_prepare(db, "update data_pwr set timestamp=?,boardtype=?,flag=?,period=?, current_size=? where nID=?", -1, &stmt_update, 0);
	//insert into data_pwr(id,timestamp,nID,boardtype,flag,period,current) values (?,?,?,?,?,?,?);
	time_t tt = time(NULL);
	sqlite3_bind_int(stmt_update, 1, tt);
	sqlite3_bind_int(stmt_update, 2, ST_BOARD_TYPE_PWR);
	sqlite3_bind_int(stmt_update, 3,  buf[1]);
	sqlite3_bind_int(stmt_update, 4,  buf[2]); //period
	sqlite3_bind_int(stmt_update, 5,  buf[3]); //current
	sqlite3_bind_int(stmt_update, 6,  nID); //nID

	
	rc = sqlite3_step(stmt_update);
	rc = sqlite3_finalize(stmt_update);
	rc = sqlite3_close(db);
#endif
}



void *thr_send_cmd(void *arg) 
{
		sqlite3 *db;
		char *zErrMsg = 0;
		int rc;
		rc = sqlite3_open(ST_DATABASE_FILE_NAME, &db);
		if( rc )
		{
			fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
			sqlite3_close(db);
			exit(1);
		}
		sqlite3_stmt *stmt_select = 0;
		sqlite3_stmt *stmt_del = 0;
		int board_type;
		int nID;
		int id;
		int cmd_type;
		char *zSql;
		const char *blob;
		int blob_len;
		unsigned char packet_data[127];
		int packet_len;

		sqlite3_prepare(db, "select * from cmd;", -1, &stmt_select, 0);

		while (sqlite3_step(stmt_select) != SQLITE_DONE)
		{
		//create table cmd(id integer primary key asc, timestamp integer, nID integer, boardtype integer, cmdtype integer, cmdparam blob);
			id = sqlite3_column_int(stmt_select, 0);
			sqlite3_prepare(db, "delete from cmd where id=?;", -1, &stmt_del, 0);
			sqlite3_bind_int(stmt_del, 1, id);
			rc = sqlite3_step(stmt_del);
			
			nID = sqlite3_column_int(stmt_select, 2);
			board_type = sqlite3_column_int(stmt_select, 3);
			cmd_type = sqlite3_column_int(stmt_select, 4);
			blob = sqlite3_column_blob(stmt_select, 5);
			blob_len = sqlite3_column_bytes(stmt_select, 5);
			packet_data[0] = board_type;
			packet_data[1] = cmd_type;
			memcpy(packet_data+2, blob, blob_len);
			packet_len = blob_len+2;
			can_send_packet(nID, ST_CAN_PROTOCAL_PARAM_SET, packet_data, packet_len);
		}
		sqlite3_finalize(stmt_select);
		sqlite3_finalize(stmt_del);
		sqlite3_close(db);
}
/* some other thread code that signals a waiting thread that MAX_COUNT has been reached */
int read_index = 0;

void *thr_recv_do(void *arg)
{
	thread_recv_data_t *pthdata = (thread_recv_data_t *)arg;
	char buf[128];
	int len;

		while(1)
		{
			can_recv_packet(pthdata->nID,pthdata->protocal, buf, &len);
			int board_type = buf[0];
			switch (board_type)
			{
			case ST_BOARD_TYPE_PWR:
				db_store_pwr(pthdata->nID, buf);
				break;
			case ST_BOARD_TYPE_GNSS:
				break;
				
			}
		}
		
		return 0;
}



/* ���մ����߳� */
void *thr_recv(void *arg) 
{
	pthread_t thr[12];
	thread_recv_data_t thdata[12];
	int ret;
	int i;

	for (i = 0; i<12; i++)
	{
		thdata[i].nID = i+1;
		thdata[i].protocal = ST_CAN_PROTOCAL_UP_INFORM;
		ret = pthread_create(&thr[i], NULL, thr_recv_do, (void *)&thdata[i]);
	}
} 

void *thr_manage_do(void *arg)
{

}

void *thr_heartbeat_do(void *arg)
{
	int timeout = 3;
	unsigned char nID = (int)arg;
	int connect = 1;// 1: connected 0: unconnected
	sqlite3 *db;
	sqlite3_stmt *stmt = 0;
	char *zErrMsg = 0;
	int rc;
	
	rc = sqlite3_open(ST_DATABASE_FILE_NAME, &db);
	if( rc )
	{

		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		exit(1);
	}
	sqlite3_prepare(db, "update board_connection set connection=? where nID=?;", -1, &stmt, 0);

	while(1)
	{
		if (can_recv_hearbeat(nID) == 0)
		{
			if (connect != 1)
			{
				connect = 1;
				sqlite3_bind_int(stmt, 1, 1);
				sqlite3_bind_int(stmt, 2, nID);
				sqlite3_step(stmt);
			}
			timeout = 3;
		}
		else
		{
			if (timeout!=0)
				timeout--;
		}
		
		if(timeout == 0)
		{
			if (connect != 0)
			{
				connect = 0;
				sqlite3_bind_int(stmt, 1, 0);
				sqlite3_bind_int(stmt, 2, nID);
				sqlite3_step(stmt);
			}
		}
	}
}



int main() 
{
	pthread_t thr_recv[26];
	pthread_t thr_heartbeat[26];
	pthread_t thr_send;
	pthread_t thr_manage;
	
	
	thread_recv_data_t thdata_recv[26];

	int ret;
	int i;
#if 0
	for (i = 0; i<1; i++)
	{
		thdata_recv[i].nID = i+1;
		thdata_recv[i].protocal = ST_CAN_PROTOCAL_UP_INFORM;
		ret = pthread_create(&thr_recv[i], NULL, thr_recv_do, &thdata_recv[i]);
	}
#endif



	ret = pthread_create(&thr_send, NULL, thr_send_cmd, NULL);
	pthread_join(thr_send, NULL);
	return 0;
	ret = pthread_create(&thr_manage, NULL, thr_manage_do, NULL);
	unsigned char nID;

	for (nID = 1; nID<=26; i++)
		pthread_create(&thr_heartbeat[26], NULL, thr_heartbeat_do, (void *)nID);


	for (i = 0; i<26; i++)
	{
		pthread_join(thr_recv[i], NULL);
		pthread_join(thr_heartbeat[i], NULL);
	}
	pthread_join(thr_send, NULL);
	pthread_join(thr_manage, NULL); 


	
	return 0;
}

#if 0
int main()
{
	char buf[128];
	int len;

	//can_send_packet(0x1A, 1, "ABC1234567890abcdefg", 20);
	can_recv_packet(0x13, 1, buf, &len);
	return 0;
	
}
#endif