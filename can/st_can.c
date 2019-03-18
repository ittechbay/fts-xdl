//arm-poky-linux-gnueabi-gcc -g -o stcan -L/work1/can/lib/lib -I/work1/can/lib/include -lsqlite3 -lpthread st_can.c st_can_proc.c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <time.h>
#include <sys/types.h>		
#include <sys/socket.h>
#include <sys/ioctl.h>

#include <net/if.h>

#include <sqlite3.h>
#include "st_can.h"



/* create thread argument struct for thr_func() */

/* 
	返回0: 接收成功; 其它值: 接收失败
*/
int can_send_packet(int nID, int protocal, char *data, int len)
{
	int sock;
	struct sockaddr_can addr;
	struct ifreq ifr;
	int ret;

	
	sock = socket(PF_CAN, SOCK_RAW, CAN_RAW);
	if(sock < 0) {
		printf("fts_can_send_and_recv socket error\n");
		exit(1);
	}
	
	addr.can_family = AF_CAN;
	strcpy(ifr.ifr_name, "can0"); //?? which can should i use
	ret = ioctl(sock, SIOCGIFINDEX, &ifr);	// get index
	if(ret && ifr.ifr_ifindex == 0)
	{
		close(sock);
		exit(1);
	}
	addr.can_ifindex = ifr.ifr_ifindex;

	unsigned int frame_cnt;
	unsigned int frame_index = 0;
	char chksum = 0;
	struct can_frame send_frame;
	struct can_frame recv_frame;
	frame_cnt = len/8+1; 
	send_frame.can_dlc = 8;
	
	int i;
	for (i=0; i<len; i++)
		chksum += data[i];
	chksum =~chksum;
	struct timeval tv;
	tv.tv_sec = 5;
	tv.tv_usec = 0;
	//setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv);

	if (bind(sock,(struct sockaddr *)&addr,sizeof(addr))<0) {
		printf("bind error\n");
		close(sock);
		exit(1);
	}
	
	while(frame_index < frame_cnt)
	{
		int offset;
		
		offset = frame_index * 8;
		memset(send_frame.data, 0, 8);
		send_frame.can_id = CAN_EFF_FLAG|protocal<<24|frame_cnt<<20|frame_index<<16|nID<<8|ST_BOARD_NID_MONITOR;
		if (len - frame_index * 8 < 8)
		{
			memcpy(send_frame.data, data+offset, len-offset);
			send_frame.data[8] = chksum;
		}
		else
			memcpy(send_frame.data, data+offset, 8);

		int retry = 3;
		struct can_filter rfilter[1];
		rfilter[0].can_id = CAN_EFF_FLAG|(protocal<<24)|(frame_cnt<<20)|(frame_index<<16)|(ST_BOARD_NID_MONITOR<<8)|nID;
		rfilter[0].can_mask = CAN_EFF_FLAG|ST_CAN_MASK_PROTOCAL|ST_CAN_MASK_PACKET_LENGTH|ST_CAN_MASK_FRAME_INDEX|ST_CAN_MASK_RECV_NID|ST_CAN_MASK_SEND_NID;
		setsockopt(sock, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));
		
		while(retry-- > 0)
		{
			ret = write(sock, (void *)&send_frame, sizeof(struct can_frame));
			ret = read(sock, (void *)&recv_frame, sizeof(struct can_frame));
			if (ret >0)
				break;
			
		}
		if (ret <= 0)
		{
			close(sock);
			return -1;
		}
		frame_index++;
	}
	
	close(sock);
	return 0;
}


/* 功能: 接收can数据包  
   返回值: 0表示成功; 非0 表示失败
*/
int can_recv_packet(int nID, int protocal, char *buf, int *len)
{
	int sock;
	struct sockaddr_can addr;
	struct ifreq ifr;
	int ret;
	
	sock = socket(PF_CAN, SOCK_RAW, CAN_RAW);
	if(sock < 0) {
		printf("fts_can_send_and_recv socket error\n");
		exit(1);
	}
	addr.can_family = AF_CAN;
	strcpy(ifr.ifr_name, "can0"); //?? which can should i use
	ret = ioctl(sock, SIOCGIFINDEX, &ifr);	//get index
	addr.can_ifindex = ifr.ifr_ifindex;
	
	if (bind(sock,(struct sockaddr*)&addr,sizeof(addr))<0) {
		printf("bind error\n");
		close(sock);
		exit(1);
	}
	
	int recv_nID;
	struct can_frame recv_frame;
	struct can_frame send_frame;
	int packet_len;

	int frame_index = 0;
	struct timeval tv;
	tv.tv_sec = 5;
	tv.tv_usec = 0;
	//setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv);	
	while(1)
	{
		struct can_filter rfilter[1];

		//第1 个滤波 处理数据帧丢失; 第2 个滤波处理响应帧丢失
		rfilter[0].can_id = CAN_EFF_FLAG|(protocal<<24)|(ST_BOARD_NID_MONITOR<<8)|nID;
		rfilter[0].can_mask = CAN_EFF_FLAG|ST_CAN_MASK_PROTOCAL|ST_CAN_MASK_RECV_NID|ST_CAN_MASK_SEND_NID;
		setsockopt(sock, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));
		
		memset(recv_frame.data, 0, 8);
		ret = read(sock, (void *)&recv_frame, sizeof(struct can_frame));
		if (ret <= 0)
		{
			close(sock);
			return -1;
		}
		packet_len = (recv_frame.can_id&0xF00000)>>20;
		frame_index = (recv_frame.can_id&0x0F0000)>>16;
		send_frame.can_id = CAN_EFF_FLAG|(protocal<<24)|(packet_len<<20)|(frame_index<<16)|(nID<<8)|ST_BOARD_NID_MONITOR;
		
		send_frame.can_dlc = 0;
		ret = write(sock, (void *)&send_frame, sizeof(struct can_frame));
		memcpy(buf+frame_index*8, recv_frame.data, 8);
		if (frame_index == packet_len-1)
			break;
		frame_index++;
	}

	close(sock);
	int i;
	unsigned char chksum = 0;
	for(i = 0; i < packet_len*8; i++)
	{
		chksum += buf[i];
	}
	if (chksum != 0xFF)
		return -1;
	*len = packet_len*8;
	return 0;
}

int can_recv_hearbeat()
{
	int sock;
	struct sockaddr_can addr;
	struct ifreq ifr;
	int ret;
	
	sock = socket(PF_CAN, SOCK_RAW, CAN_RAW);
	if(sock < 0) {
		printf("fts_can_send_and_recv socket error\n");
		exit(1);
	}
	addr.can_family = AF_CAN;
	strcpy(ifr.ifr_name, "can0"); //?? which can should i use
	ret = ioctl(sock, SIOCGIFINDEX, &ifr);	//get index
	addr.can_ifindex = ifr.ifr_ifindex;
	
	if (bind(sock,(struct sockaddr*)&addr,sizeof(addr))<0) {
		printf("bind error\n");
		close(sock);
		exit(1);
	}
	
	int recv_nID;
	struct can_frame recv_frame;
	struct timeval tv;
	tv.tv_sec = 1;
	tv.tv_usec = 0;
	setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv);
	
	struct can_filter rfilter[1];


	rfilter[0].can_id =CAN_EFF_FLAG|(ST_CAN_PROTOCAL_HEARTBEAT<<24)|(ST_BOARD_NID_MONITOR<<8);
	rfilter[0].can_mask = CAN_EFF_FLAG|ST_CAN_MASK_PROTOCAL|ST_CAN_MASK_RECV_NID;
	setsockopt(sock, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));
	memset(recv_frame.data, 0, 8);
	ret = read(sock, (void *)&recv_frame, sizeof(struct can_frame));
	close(sock);
	if (ret <= 0)
	{
		return -1;
	}
	int nID;
	nID = recv_frame.can_id&ST_CAN_MASK_SEND_NID;
	return 0;
}


