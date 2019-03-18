/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "ftsRefTable.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	
	
#include "fts_cfg.h"
#include "ftsSetDo.h"





/** Initializes the ftsRefTable module */
void
init_ftsRefTable(void)
{
  /* here we initialize all the tables we're planning on supporting */
    initialize_table_ftsRefTable();
}

void ftsRefTable_set_var(long ftsRefIndex, long ftsRefState,char *ftsRefDescr, long ftsRefDescr_len, long ftsRefGrade)
{


}

void ftsRefTable_data_load(netsnmp_tdata *table_data)
{
	struct ftsRefTable_entry *entry;
	netsnmp_tdata_row *row;
	FILE *fp, *fp1;
	char line[256];
	int parse_mode = 0;
	char pathname[256];
	char pathname1[256];

	strcpy(pathname, getenv("HOME"));
	strcat(pathname, "/.snmp/fts/");
	strcat(pathname, FTS_DATA_FILE_NAME);
	fp = fopen(pathname, "r");
	if (fp == NULL)
	{
		DEBUGMSGTL(("fts_scalar_save", "save fts data from file\n"));
		return;
	}


 	while (fgets(line, sizeof(line), fp)) 
	{
		char *p;
		char tmp[32];
		
		if (line[0] == '#' || line[0] == '\r') //if comment ,then coninue
			continue;
		if (line[0] == '[')
		{
			p = strchr(line, ']');
			if (!p)
				return;
			*p = '\0';
			strcpy(tmp, line+1);
			if (strcmp(tmp, "ftsRefTable") == 0)
				parse_mode = 1;
			else if (parse_mode == 1)
				break;

		}
		else if (parse_mode == 1)
		{
			char tmp[FTS_STRING_LEN];
			char *p;
			
			entry = SNMP_MALLOC_TYPEDEF(struct ftsRefTable_entry);
			if (!entry)
				return;
			sscanf(line, "%d %d %s %d", &entry->ftsRefIndex, &entry->ftsRefState, tmp, &entry->ftsRefGrade);
			entry->old_ftsRefState = entry->ftsRefState;
			strcpy(entry->ftsRefDescr, tmp+1);
			p = strchr(entry->ftsRefDescr, '\"');
			*p = '\0';
			entry->ftsRefDescr_len = strlen(entry->ftsRefDescr);
			row = netsnmp_tdata_create_row();
			if (!row) {
				SNMP_FREE(entry);
				return;
			}
			row->data = entry;

			netsnmp_tdata_row_add_index( row, ASN_INTEGER,
											 &(entry->ftsRefIndex),
											 sizeof(entry->ftsRefIndex));
			netsnmp_tdata_add_row(table_data, row);
		}
 	}

}

void ftsRefTable_data_save(netsnmp_tdata *table_data)
{
	struct ftsRefTable_entry *entry;
	FILE *fp, *fp1;
	char line[256];
	int parse_mode;
	int parse_mode1;
	char pathname[256];
	char pathname1[256];
	netsnmp_tdata_row *td, *td_tmp;

	strcpy(pathname, getenv("HOME"));
	
	strcat(pathname, "/.snmp/fts/");
	strcat(pathname, FTS_DATA_FILE_NAME);
	fp = fopen(pathname, "r");
	if (fp == NULL)
	{
		DEBUGMSGTL(("fts_scalar_save", "save fts data from file\n"));
		return;
	}
	
	strcpy(pathname1, getenv("HOME"));
	strcat(pathname1, "/.snmp/fts/");
	strcat(pathname1, "fts.dat.tmp");
	
	fp1 = fopen(pathname1, "w+");
	if (fp1 == NULL)
	{
		DEBUGMSGTL(("fts_scalar_save", "save fts data from file\n"));
		return;
	}
	parse_mode = 0;
	parse_mode1 = 0;
	while (fgets(line, sizeof(line), fp)) {
	if (line[0] == '#' || line[0] == '\r') //if comment ,then coninue
	{
		fprintf(fp1, "%s", line);
		continue;
	}
	if (line[0] == '[')
	{
	
	//[ftsRefTable]
	//[ftsNtpTable]
	//[ftsPtpTable]
	//[ftsTimingTable]
		char *p;
		char tmp[32];

		fprintf(fp1, "%s", line);
		p = strchr(line, ']');
		if (!p)
			return;
		*p = '\0';
		strcpy(tmp, line+1);
		if (strcmp(tmp, "ftsRefTable") == 0)
			{
			parse_mode = 1;
			
			td = netsnmp_tdata_row_first(table_data);
			entry = (struct ftsRefTable_entry *)netsnmp_tdata_row_entry( td );
			fprintf(fp1, "%d %d \"%s\" %d\r\n", entry->ftsRefIndex, entry->ftsRefState, entry->ftsRefDescr, entry->ftsRefGrade);
			while((td_tmp = netsnmp_tdata_row_next(table_data, td)) != NULL)
			{
				entry = (struct ftsRefTable_entry *)netsnmp_tdata_row_entry( td_tmp );
				fprintf(fp1, "%d %d \"%s\" %d\r\n", entry->ftsRefIndex, entry->ftsRefState, entry->ftsRefDescr, entry->ftsRefGrade);
				td = td_tmp;
			}
			}
		
		else
		{
			parse_mode = 0;
			//fprintf(fp1, "%s", line);
		}
	}
	else if (parse_mode == 1)
	{
		//netsnmp_tdata_row *
		//netsnmp_tdata_row_first (netsnmp_tdata *table)
		//netsnmp_tdata_row *
		//netsnmp_tdata_row_next( netsnmp_tdata	   *table,
		//						netsnmp_tdata_row  *row)
		
	}
	else
		fprintf(fp1, "%s", line);

 }
	fclose(fp);
	fclose(fp1);
	remove(pathname);
	rename(pathname1, pathname);
	
}



/** Initialize the ftsRefTable table by defining its contents and how it's structured */
void
initialize_table_ftsRefTable(void)
{
    const oid ftsRefTable_oid[] = {1,3,6,1,4,1,63000,2,1,13,1,2,1,1,7};
    const size_t ftsRefTable_oid_len   = OID_LENGTH(ftsRefTable_oid);
    netsnmp_handler_registration    *reg;
    netsnmp_tdata                   *table_data;
    netsnmp_table_registration_info *table_info;

    DEBUGMSGTL(("ftsRefTable:init", "initializing table ftsRefTable\n"));

    reg = netsnmp_create_handler_registration(
              "ftsRefTable",     ftsRefTable_handler,
              ftsRefTable_oid, ftsRefTable_oid_len,
              HANDLER_CAN_RWRITE
              );

    table_data = netsnmp_tdata_create_table( "ftsRefTable", 0 );
    if (NULL == table_data) {
        snmp_log(LOG_ERR,"error creating tdata table for ftsRefTable\n");
        return;
    }
	ftsRefTable_data_load(table_data);
    table_info = SNMP_MALLOC_TYPEDEF( netsnmp_table_registration_info );
    if (NULL == table_info) {
        snmp_log(LOG_ERR,"error creating table info for ftsRefTable\n");
        return;
    }
    netsnmp_table_helper_add_indexes(table_info,
                           ASN_INTEGER,  /* index: ftsRefIndex */
                           0);

    table_info->min_column = COLUMN_FTSREFINDEX;
    table_info->max_column = COLUMN_FTSREFGRADE;
    
    netsnmp_tdata_register( reg, table_data, table_info );

    /* Initialise the contents of the table here */
}


/* create a new row in the table */
netsnmp_tdata_row *
ftsRefTable_createEntry(netsnmp_tdata *table_data
                 , long  ftsRefIndex
                ) {
    struct ftsRefTable_entry *entry;
    netsnmp_tdata_row *row;

    entry = SNMP_MALLOC_TYPEDEF(struct ftsRefTable_entry);
    if (!entry)
        return NULL;

    row = netsnmp_tdata_create_row();
    if (!row) {
        SNMP_FREE(entry);
        return NULL;
    }
    row->data = entry;

    DEBUGMSGT(("ftsRefTable:entry:create", "row 0x%x\n", (uintptr_t)row));
    entry->ftsRefIndex = ftsRefIndex;
    netsnmp_tdata_row_add_index( row, ASN_INTEGER,
                                 &(entry->ftsRefIndex),
                                 sizeof(entry->ftsRefIndex));
    if (table_data)
        netsnmp_tdata_add_row( table_data, row );
    return row;
}

/* remove a row from the table */
void
ftsRefTable_removeEntry(netsnmp_tdata     *table_data, 
                 netsnmp_tdata_row *row) {
    struct ftsRefTable_entry *entry;

    if (!row)
        return;    /* Nothing to remove */

    DEBUGMSGT(("ftsRefTable:entry:remove", "row 0x%x\n", (uintptr_t)row));

    entry = (struct ftsRefTable_entry *)row->data;
    SNMP_FREE( entry );   /* XXX - release any other internal resources */

    if (table_data)
        netsnmp_tdata_remove_and_delete_row( table_data, row );
    else
        netsnmp_tdata_delete_row( row );    
}


/** handles requests for the ftsRefTable table */
int
ftsRefTable_handler(
    netsnmp_mib_handler               *handler,
    netsnmp_handler_registration      *reginfo,
    netsnmp_agent_request_info        *reqinfo,
    netsnmp_request_info              *requests) {

    netsnmp_request_info       *request;
    netsnmp_table_request_info *table_info;
    netsnmp_tdata              *table_data;
    netsnmp_tdata_row          *table_row;
    struct ftsRefTable_entry          *table_entry;
    int                         ret;

	table_data = netsnmp_tdata_extract_table(requests);

    DEBUGMSGTL(("ftsRefTable:handler", "Processing request (%d)\n", reqinfo->mode));

    switch (reqinfo->mode) {
        /*
         * Read-support (also covers GetNext requests)
         */
    case MODE_GET:
        for (request=requests; request; request=request->next) {
            if (request->processed)
                continue;

            table_entry = (struct ftsRefTable_entry *)
                              netsnmp_tdata_extract_entry(request);
            table_info  =     netsnmp_extract_table_info( request);
    
            switch (table_info->colnum) {
            case COLUMN_FTSREFINDEX:
                if ( !table_entry ) {
                    netsnmp_set_request_error(reqinfo, request,
                                              SNMP_NOSUCHINSTANCE);
                    continue;
                }
                snmp_set_var_typed_integer( request->requestvb, ASN_INTEGER,
                                            table_entry->ftsRefIndex);
                break;
            case COLUMN_FTSREFSTATE:
                if ( !table_entry ) {
                    netsnmp_set_request_error(reqinfo, request,
                                              SNMP_NOSUCHINSTANCE);
                    continue;
                }
                snmp_set_var_typed_integer( request->requestvb, ASN_INTEGER,
                                            table_entry->ftsRefState);
                break;
            case COLUMN_FTSREFDESCR:
                if ( !table_entry ) {
                    netsnmp_set_request_error(reqinfo, request,
                                              SNMP_NOSUCHINSTANCE);
                    continue;
                }
                snmp_set_var_typed_value( request->requestvb, ASN_OCTET_STR,
                                          table_entry->ftsRefDescr,
                                          table_entry->ftsRefDescr_len);
				
                break;
            case COLUMN_FTSREFGRADE:
                if ( !table_entry ) {
                    netsnmp_set_request_error(reqinfo, request,
                                              SNMP_NOSUCHINSTANCE);
                    continue;
                }
                snmp_set_var_typed_integer( request->requestvb, ASN_INTEGER,
                                            table_entry->ftsRefGrade);
                break;
            default:
                netsnmp_set_request_error(reqinfo, request,
                                          SNMP_NOSUCHOBJECT);
                break;
            }
        }
        break;

        /*
         * Write-support
         */
    case MODE_SET_RESERVE1:
        for (request=requests; request; request=request->next) {
            if (request->processed)
                continue;

            table_entry = (struct ftsRefTable_entry *)
                              netsnmp_tdata_extract_entry(request);
            table_info  =     netsnmp_extract_table_info( request);
    
            switch (table_info->colnum) {
            case COLUMN_FTSREFSTATE:
                /* or possibly 'netsnmp_check_vb_int_range' */
                ret = netsnmp_check_vb_int( request->requestvb );
                if ( ret != SNMP_ERR_NOERROR ) {
                    netsnmp_set_request_error( reqinfo, request, ret );
                    return SNMP_ERR_NOERROR;
                }
                break;
			case COLUMN_FTSREFDESCR:
				/* or possibly 'netsnmp_check_vb_int_range' */
                ret = netsnmp_check_vb_type_and_max_size(
                          request->requestvb, ASN_OCTET_STR, FTS_STRING_LEN);
				if ( ret != SNMP_ERR_NOERROR ) {
					netsnmp_set_request_error( reqinfo, request, ret );
					return SNMP_ERR_NOERROR;
				}
				
				break;
			case COLUMN_FTSREFGRADE:
				/* or possibly 'netsnmp_check_vb_int_range' */
				ret = netsnmp_check_vb_int( request->requestvb );
				if ( ret != SNMP_ERR_NOERROR ) {
					netsnmp_set_request_error( reqinfo, request, ret );
					return SNMP_ERR_NOERROR;
				}
				break;




				
            default:
                netsnmp_set_request_error( reqinfo, request,
                                           SNMP_ERR_NOTWRITABLE );
                return SNMP_ERR_NOERROR;
            }
        }
        break;

    case MODE_SET_RESERVE2:
        for (request = requests; request; request = request->next) {
            table_row = netsnmp_tdata_extract_row(request);
            table_info = netsnmp_extract_table_info(request);

            switch (table_info->colnum) {
			case COLUMN_FTSREFINDEX:
            case COLUMN_FTSREFSTATE:
            case COLUMN_FTSREFDESCR:
            case COLUMN_FTSREFGRADE:
                if (!table_row) {
                    table_row =
                        ftsRefTable_createEntry(table_data,
                                               *table_info->indexes->val.
                                               integer);
                    if (table_row) {
                        netsnmp_insert_tdata_row(request, table_row);
                    } else {
                        netsnmp_set_request_error(reqinfo, request,
                                                  SNMP_ERR_RESOURCEUNAVAILABLE);
                        return SNMP_ERR_NOERROR;
                    }
                }
                break;
            }
        }



        break;

    case MODE_SET_FREE:
        break;

    case MODE_SET_ACTION:
		/*
		{
			fts_set_cmd *cmd;
			cmd = ftsSetCmd_make_refTable(requests);
			ftsSetCmd_send(cmd);
    	}
		  */
	      for (request=requests; request; request=request->next) {
	            if (request->processed)
	                continue;

	            table_entry = (struct ftsRefTable_entry *)
	                              netsnmp_tdata_extract_entry(request);
	            table_info  =     netsnmp_extract_table_info( request);
	    
	            switch (table_info->colnum) {
	            case COLUMN_FTSREFSTATE:
	                table_entry->old_ftsRefState = table_entry->ftsRefState;
	                table_entry->ftsRefState     = *request->requestvb->val.integer;
	                break;
				case COLUMN_FTSREFDESCR:
					strcpy(table_entry->ftsRefDescr, request->requestvb->val.string);
					table_entry->ftsRefDescr_len = strlen(table_entry->ftsRefDescr);
					break;
				case COLUMN_FTSREFGRADE:
					table_entry->ftsRefGrade = *request->requestvb->val.integer;
					break;

					
	            }
	        }
		ftsRefTable_data_save(table_data);
        break;

    case MODE_SET_UNDO:
        for (request=requests; request; request=request->next) {
            if (request->processed)
                continue;

            table_entry = (struct ftsRefTable_entry *)
                              netsnmp_tdata_extract_entry(request);
            table_row   =     netsnmp_tdata_extract_row(request);
            table_data  =     netsnmp_tdata_extract_table(request);
            table_info  =     netsnmp_extract_table_info( request);
    
            switch (table_info->colnum) {
            case COLUMN_FTSREFSTATE:
                table_entry->ftsRefState     = table_entry->old_ftsRefState;
                table_entry->old_ftsRefState = 0;
                break;
            }
        }
        break;

    case MODE_SET_COMMIT:
        break;
    }
    return SNMP_ERR_NOERROR;
}
