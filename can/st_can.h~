#ifndef ST_CAN_H
#define ST_CAN_H

#define ST_CAN_PROTOCAL_UP_INFORM 0x01
#define ST_CAN_PROTOCAL_PARAM_SET 0x02
#define ST_CAN_PROTOCAL_FILE_TRANSFER 0x03
#define ST_CAN_PROTOCAL_ACK 0x04
#define ST_CAN_PROTOCAL_HEARTBEAT 0x05

#define ST_CAN_PROTOCAL_CTL_CODE_ALL_PERIOD 0x01
#define ST_CAN_PROTOCAL_CTL_CODE_BCODE_SET_MI 0x02  /* 设置调制比命令码 */
#define ST_CAN_PROTOCAL_CTL_CODE_BCODE_SET_AMP 0x03 /* 设置幅度命令码 */

#define ST_CAN_PROTOCAL_CTL_PARAM_BCODE_MI_2O1 0x01  /* 调整比类型2/1 */
#define ST_CAN_PROTOCAL_CTL_PARAM_BCODE_MI_3O1 0x02  /* 调整比类型3/1 */
#define ST_CAN_PROTOCAL_CTL_PARAM_BCODE_MI_4O1 0x03  /* 调整比类型4/1 */
#define ST_CAN_PROTOCAL_CTL_PARAM_BCODE_MI_5O1 0x04  /* 调整比类型5/1 */
#define ST_CAN_PROTOCAL_CTL_PARAM_BCODE_MI_6O1 0x05  /* 调整比类型6/1 */




#define ST_CAN_PROTOCAL_CTL_CODE 0x01


#define ST_CAN_PROTOCAL_CMD
#define ST_CAN_PROTOCAL_CMD
#define ST_CAN_PROTOCAL_CMD

#define ST_BOARD_TYPE_PWR 0x1
#define ST_BOARD_TYPE_GNSS 0x2
#define ST_BOARD_TYPE_TF 0x3
#define ST_BOARD_TYPE_PWR 0x1
#define ST_BOARD_TYPE_PWR 0x1



#define ST_BOARD_NID_MONITOR 0xF0
#define ST_BOARD_CONNECT 1
#define ST_BOARD_UNCONNECT 0

#define ST_CAN_MASK_PROTOCAL 0x1F000000
#define ST_CAN_MASK_RECV_NID 0x0000FF00
#define ST_CAN_MASK_SEND_NID 0x000000FF
#define ST_CAN_MASK_FRAME_INDEX 0x000F0000
#define ST_CAN_MASK_PACKET_LENGTH 0x00F00000


typedef struct t_param_bcode_mi {
	unsigned char mi;
} param_bcode_mi;
typedef struct t_param_bcode_amp {
	unsigned char amp; /* 计算公式: x-0.5/0.1*/
} param_bcode_amp;

int can_send_packet(int nID, int protocal, char *buf, int len);
int can_recv_packet(int nID, int protocal, char *buf, int *len);



#endif // ST_CAN_H
