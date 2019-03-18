/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "fts_cfg.h"
#include "fts_scalar.h"
#include "ftsSetDo.h"



#define FTS_REF_CFG_LEN 64
#define FTS_TIMING_CFG 64

#define PARSE_MODE_FTS_REF_CFG 0
#define PARSE_MODE_FTS_REF_CURRENT 1
#define PARSE_MODE_FTS_CLK_STATE 2
#define PARSE_MODE_FTS_CLK_MODE 3
#define PARSE_MODE_FTS_CLK_TIME_ACCURACY 4
#define PARSE_MODE_FTS_CLK_FREQ_ACCURACY 5
#define PARSE_MODE_FTS_CLK_TIME_THRESHOLD 6
#define PARSE_MODE_FTS_CLK_GRADE 7
#define PARSE_MODE_FTS_CLK_CURRENT_STATE_LAST 8
#define PARSE_MODE_FTS_CLK_CLASS 9
#define PARSE_MODE_FTS_NTP_NUMS 10
#define PARSE_MODE_FTS_PTP_NUMS 11
#define PARSE_MODE_FTS_TIMING_CFG 12
#define PARSE_MODE_NULL 13


struct fts_scalar_data_s fts_scalar_data;

//data get interface
void *fts_scalar_getvar(int var)
{
	// not support multi-task
	switch (var)
	{
		case VAR_FTS_REF_CFG:
			return fts_scalar_data.ftsRefCfg;
		break;
		case VAR_FTS_REF_CURRENT:
			
			return fts_scalar_data.ftsRefCurrent;
		break;
		case VAR_FTS_CLK_STATE:
			return fts_scalar_data.ftsClkState;
		break;
		case VAR_FTS_CLK_MODE:
			return fts_scalar_data.ftsClkMode;
		break;
		case VAR_FTS_CLK_TIME_ACCURACY:
			return fts_scalar_data.ftsClkTimeAccuracy;
		break;
		case VAR_FTS_CLK_FREQ_ACCURACY:
			return fts_scalar_data.ftsClkFreqAccuracy;
		break;
		case VAR_FTS_CLK_GRADE:
			return fts_scalar_data.ftsClkGrade;
		break;
		case VAR_FTS_CLK_CURRENT_STATE_LAST:
			return fts_scalar_data.ftsClkCurrentStateLast;
		break;
		case VAR_FTS_CLK_CLASS:
			return fts_scalar_data.ftsClkClass;
		break;
		case VAR_FTS_NTP_NUMS:
			return fts_scalar_data.ftsNtpNums;
		break;
		case VAR_FTS_PTP_NUMS:
			return fts_scalar_data.ftsPtpNums;
		break;
		case VAR_FTS_TIMING_CFG:
			return fts_scalar_data.ftsTimingCfg;
		break;
	}
	return NULL;
}
void fts_scalar_set_var(int type, void *data)
{
	switch (type)
	{
		case VAR_FTS_REF_CFG:
			return strcpy(fts_scalar_data.ftsRefCfg, (char *)data);
		break;
		case VAR_FTS_REF_CURRENT:
			
			return fts_scalar_data.ftsRefCurrent = *(int *)data;
		break;
		case VAR_FTS_CLK_STATE:
			return fts_scalar_data.ftsClkState = *(int *)data;
		break;
		case VAR_FTS_CLK_MODE:
			return fts_scalar_data.ftsClkMode = *(int *)data;
		break;
		case VAR_FTS_CLK_TIME_ACCURACY:
			return fts_scalar_data.ftsClkTimeAccuracy = *(int *)data;
		break;
		case VAR_FTS_CLK_FREQ_ACCURACY:
			return fts_scalar_data.ftsClkFreqAccuracy = *(int *)data;
		break;
		case VAR_FTS_CLK_GRADE:
			return fts_scalar_data.ftsClkGrade = *(int *)data;
		break;
		case VAR_FTS_CLK_CURRENT_STATE_LAST:
			return fts_scalar_data.ftsClkCurrentStateLast = *(int *)data;
		break;
		case VAR_FTS_CLK_CLASS:
			return fts_scalar_data.ftsClkClass = *(int *)data;
		break;
		case VAR_FTS_NTP_NUMS:
			return fts_scalar_data.ftsNtpNums = *(int *)data;
		break;
		case VAR_FTS_PTP_NUMS:
			return fts_scalar_data.ftsPtpNums = *(int *)data;
		break;
		case VAR_FTS_TIMING_CFG:
			return strcpy(fts_scalar_data.ftsTimingCfg, (char *)data);
		break;
	}
	return NULL;
}


void fts_scalar_load()
{
	FILE *fp;
	char line[256];
	int parse_mode;
	char *path;
	char pathname[256];
	


	path = getenv("HOME");
	strcpy(pathname, path);
	
	strcat(pathname, "/.snmp/fts/");
	strcat(pathname, FTS_DATA_FILE_NAME);
	fp = fopen(pathname, "r");
	if (fp == NULL)
	{
		DEBUGMSGTL(("fts_data_load", "load fts data from file\n"));
		return;
	}
	parse_mode = PARSE_MODE_NULL;
 	while (fgets(line, sizeof(line), fp)) {
	if (line[0] == '#' || line[0] == '\r') //if comment ,then coninue
		continue;
	if (line[0] == '[')
	{
			char *p;
			char tmp[32];
			p = strchr(line, ']');
			if (!p)
				return;
			*p = '\0';
			strcpy(tmp, line+1);
			if (strcmp(tmp, "ftsRefCfg") == 0)
				parse_mode = PARSE_MODE_FTS_REF_CFG;
			else if (strcmp(tmp, "ftsRefCurrent") == 0)
				parse_mode = PARSE_MODE_FTS_REF_CURRENT;
			else if (strcmp(tmp, "ftsClkState") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_STATE;
			else if (strcmp(tmp, "ftsClkMode") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_MODE;
			else if (strcmp(tmp, "ftsClkTimeAccuracy") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_TIME_ACCURACY;
			else if (strcmp(tmp, "ftsClkFreqAccuracy") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_FREQ_ACCURACY;
			else if (strcmp(tmp, "ftsClkTimeThreshold") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_TIME_THRESHOLD;
			else if (strcmp(tmp, "ftsClkGrade") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_GRADE;
			else if (strcmp(tmp, "ftsClkCurrentStateLast") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_CURRENT_STATE_LAST;
			else if (strcmp(tmp, "ftsClkClass") == 0)
				parse_mode = PARSE_MODE_FTS_CLK_CLASS;
			else if (strcmp(tmp, "ftsNtpNums") == 0)
				parse_mode = PARSE_MODE_FTS_NTP_NUMS;
			else if (strcmp(tmp, "ftsPtpNums") == 0)
				parse_mode = PARSE_MODE_FTS_PTP_NUMS;
			else if (strcmp(tmp, "ftsTimingCfg") == 0)
				parse_mode = PARSE_MODE_FTS_TIMING_CFG;
			else
				parse_mode = PARSE_MODE_NULL;

	}
	else
	{
		switch(parse_mode)
		{
			char *p;
			case PARSE_MODE_FTS_REF_CFG:
				sscanf(line, "\"%s", fts_scalar_data.ftsRefCfg);
				p = strchr(fts_scalar_data.ftsRefCfg, '\"');
				*p = '\0';
				break;
			case PARSE_MODE_FTS_REF_CURRENT:
				sscanf(line, "%d", &fts_scalar_data.ftsRefCurrent);
				break;
			case PARSE_MODE_FTS_CLK_STATE:
				sscanf(line, "%d", &fts_scalar_data.ftsClkState);
				break;
			case PARSE_MODE_FTS_CLK_MODE:
				sscanf(line, "%d", &fts_scalar_data.ftsClkMode);
				break;
			case PARSE_MODE_FTS_CLK_TIME_ACCURACY:
				sscanf(line, "%d", &fts_scalar_data.ftsClkTimeAccuracy);
				break;
			case PARSE_MODE_FTS_CLK_FREQ_ACCURACY:
				sscanf(line, "%d", &fts_scalar_data.ftsClkFreqAccuracy);
				break;
			case PARSE_MODE_FTS_CLK_TIME_THRESHOLD:
				sscanf(line, "%d", &fts_scalar_data.ftsClkTimeThreshold);
				break;
			case PARSE_MODE_FTS_CLK_GRADE:
				sscanf(line, "%d", &fts_scalar_data.ftsClkGrade);
				break;
			case PARSE_MODE_FTS_CLK_CURRENT_STATE_LAST:
				sscanf(line, "%d", &fts_scalar_data.ftsClkCurrentStateLast);
				break;
			case PARSE_MODE_FTS_CLK_CLASS:
				sscanf(line, "%d", &fts_scalar_data.ftsClkClass);
				break;
			case PARSE_MODE_FTS_NTP_NUMS:
				sscanf(line, "%d", &fts_scalar_data.ftsNtpNums);
				break;
			case PARSE_MODE_FTS_PTP_NUMS:
				sscanf(line, "%d", &fts_scalar_data.ftsPtpNums);
				break;
			case PARSE_MODE_FTS_TIMING_CFG:
				sscanf(line, "\"%s", fts_scalar_data.ftsTimingCfg);
				p = strchr(fts_scalar_data.ftsTimingCfg, '\"');
				*p = '\0';
				break;

			default:
				break;
			}
	}	

 }
	fclose(fp);
}

void fts_scalar_save()
{
	FILE *fp, *fp1;
	char line[256];
	int parse_mode;
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
	
	strcpy(pathname1, getenv("HOME"));
	strcat(pathname1, "/.snmp/fts/");
	strcat(pathname1, "fts.dat.tmp");
	
	fp1 = fopen(pathname1, "w+");
	if (fp1 == NULL)
	{
		DEBUGMSGTL(("fts_scalar_save", "save fts data from file\n"));
		return;
	}
	parse_mode = PARSE_MODE_NULL;
	while (fgets(line, sizeof(line), fp)) {
	if (line[0] == '#' || line[0] == '\r') //if comment ,then coninue
	{
		fprintf(fp1, "%s", line);
		continue;
	}
	if (line[0] == '[')
	{
		char *p;
		char tmp[32];

		fprintf(fp1, "%s", line);
		p = strchr(line, ']');
		if (!p)
			return;
		*p = '\0';
		strcpy(tmp, line+1);
		if (strcmp(tmp, "ftsRefCfg") == 0)
			parse_mode = PARSE_MODE_FTS_REF_CFG;
		else if (strcmp(tmp, "ftsRefCurrent") == 0)
			parse_mode = PARSE_MODE_FTS_REF_CURRENT;
		else if (strcmp(tmp, "ftsClkState") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_STATE;
		else if (strcmp(tmp, "ftsClkMode") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_MODE;
		else if (strcmp(tmp, "ftsClkTimeAccuracy") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_TIME_ACCURACY;
		else if (strcmp(tmp, "ftsClkFreqAccuracy") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_FREQ_ACCURACY;
		else if (strcmp(tmp, "ftsClkTimeThreshold") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_TIME_THRESHOLD;
		else if (strcmp(tmp, "ftsClkGrade") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_GRADE;
		else if (strcmp(tmp, "ftsClkCurrentStateLast") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_CURRENT_STATE_LAST;
		else if (strcmp(tmp, "ftsClkClass") == 0)
			parse_mode = PARSE_MODE_FTS_CLK_CLASS;
		else if (strcmp(tmp, "ftsNtpNums") == 0)
			parse_mode = PARSE_MODE_FTS_NTP_NUMS;
		else if (strcmp(tmp, "ftsPtpNums") == 0)
			parse_mode = PARSE_MODE_FTS_PTP_NUMS;
		else if (strcmp(tmp, "ftsTimingCfg") == 0)
			parse_mode = PARSE_MODE_FTS_TIMING_CFG;
		else
			parse_mode = PARSE_MODE_NULL;

	}
	else
	{
		switch(parse_mode)
		{
			char *p;
			
			case PARSE_MODE_FTS_REF_CFG:
				fprintf(fp1, "\"%s\"\r\n", fts_scalar_data.ftsRefCfg);
				break;
			case PARSE_MODE_FTS_REF_CURRENT:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsRefCurrent);
				break;
			case PARSE_MODE_FTS_CLK_STATE:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkState);
				break;
			case PARSE_MODE_FTS_CLK_MODE:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkMode);
				break;
			case PARSE_MODE_FTS_CLK_TIME_ACCURACY:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkTimeAccuracy);
				break;
			case PARSE_MODE_FTS_CLK_FREQ_ACCURACY:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkFreqAccuracy);
				break;
			case PARSE_MODE_FTS_CLK_TIME_THRESHOLD:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkTimeThreshold);
				break;
			case PARSE_MODE_FTS_CLK_GRADE:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkGrade);
				break;
			case PARSE_MODE_FTS_CLK_CURRENT_STATE_LAST:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkCurrentStateLast);
				break;
			case PARSE_MODE_FTS_CLK_CLASS:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsClkClass);
				break;
			case PARSE_MODE_FTS_NTP_NUMS:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsNtpNums);
				break;
			case PARSE_MODE_FTS_PTP_NUMS:
				fprintf(fp1, "%d\r\n", fts_scalar_data.ftsPtpNums);
				break;
			case PARSE_MODE_FTS_TIMING_CFG:
				fprintf(fp1, "\"%s\"\r\n", fts_scalar_data.ftsTimingCfg);
				break;

			default:
				fprintf(fp1, "%s", line);
				break;
			}
	}	

 }
	fclose(fp);
	fclose(fp1);
	remove(pathname);
	rename(pathname1, pathname);
}


/** Initializes the ftsRefCfg module */
void
init_fts_scalar(void)
{
	const oid ftsRefCfg_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,1,1 };
	const oid ftsRefCurrent_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,1,2 };
	const oid ftsClkState_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,1 };
	const oid ftsClkMode_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,2 };
	const oid ftsClkTimeAccuracy_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,4 };
	const oid ftsClkFreqAccuracy_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,5 };
	const oid ftsClkTimeThreshold_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,6 };
	const oid ftsClkFreqThreshold_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,7 };
	const oid ftsClkGrade_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,8 };
	const oid ftsClkCurrentStateLast_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,9 };
	const oid ftsClkClass_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,2,10 };
	const oid ftsNtpNums_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,10,1 };
	const oid ftsPtpNums_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,11,1 };
	const oid ftsTimingCfg_oid[] = { 1,3,6,1,4,1,63000,2,1,13,1,2,1,12,1 };


  DEBUGMSGTL(("fts_scalar", "Initializing\n"));

	fts_scalar_load();
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsRefCfg", handle_ftsRefCfg,
                               ftsRefCfg_oid, OID_LENGTH(ftsRefCfg_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsRefCurrent", handle_ftsRefCurrent,
                               ftsRefCurrent_oid, OID_LENGTH(ftsRefCurrent_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkState", handle_ftsClkState,
                               ftsClkState_oid, OID_LENGTH(ftsClkState_oid),
                               HANDLER_CAN_RWRITE
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkMode", handle_ftsClkMode,
                               ftsClkMode_oid, OID_LENGTH(ftsClkMode_oid),
                               HANDLER_CAN_RWRITE
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkTimeAccuracy", handle_ftsClkTimeAccuracy,
                               ftsClkTimeAccuracy_oid, OID_LENGTH(ftsClkTimeAccuracy_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkFreqAccuracy", handle_ftsClkFreqAccuracy,
                               ftsClkFreqAccuracy_oid, OID_LENGTH(ftsClkFreqAccuracy_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkTimeThreshold", handle_ftsClkTimeThreshold,
                               ftsClkTimeThreshold_oid, OID_LENGTH(ftsClkTimeThreshold_oid),
                               HANDLER_CAN_RWRITE
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkGrade", handle_ftsClkGrade,
                               ftsClkGrade_oid, OID_LENGTH(ftsClkGrade_oid),
                               HANDLER_CAN_RWRITE
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkCurrentStateLast", handle_ftsClkCurrentStateLast,
                               ftsClkCurrentStateLast_oid, OID_LENGTH(ftsClkCurrentStateLast_oid),
                               HANDLER_CAN_RONLY
        ));
    netsnmp_register_scalar(
        netsnmp_create_handler_registration("ftsClkClass", handle_ftsClkClass,
                               ftsClkClass_oid, OID_LENGTH(ftsClkClass_oid),
                               HANDLER_CAN_RONLY
        ));

	netsnmp_register_scalar(
		netsnmp_create_handler_registration("ftsClkClass", handle_ftsNtpNums,
							   ftsNtpNums_oid, OID_LENGTH(ftsNtpNums_oid),
							   HANDLER_CAN_RWRITE
		));
	netsnmp_register_scalar(
		netsnmp_create_handler_registration("ftsClkClass", handle_ftsPtpNums,
							   ftsPtpNums_oid, OID_LENGTH(ftsPtpNums_oid),
							   HANDLER_CAN_RWRITE
		));
	netsnmp_register_scalar(
		netsnmp_create_handler_registration("ftsClkClass", handle_ftsTimingCfg,
							   ftsTimingCfg_oid, OID_LENGTH(ftsTimingCfg_oid),
							   HANDLER_CAN_RWRITE
		));
}

int
handle_ftsRefCfg(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;
	
    /* We are never called for a GETNEXT if it's registered as a
       "instance", as it's "magically" handled for us.  */

    /* a instance handler also only hands us one request at a time, so
       we don't need to loop over a list of requests; we'll only get one. */
    
    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
                                     fts_scalar_data.ftsRefCfg/* XXX: a pointer to the scalar's data */,
                                     FTS_STRING_LEN/* XXX: the length of the data in bytes */);
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsRefCurrent(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    /* We are never called for a GETNEXT if it's registered as a
       "instance", as it's "magically" handled for us.  */

    /* a instance handler also only hands us one request at a time, so
       we don't need to loop over a list of requests; we'll only get one. */
    
    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsRefCurrent);
            break;
        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode);
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

// why so many enter to this function
int
handle_ftsClkState(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;
	fts_set_cmd *cmd;

    /* We are never called for a GETNEXT if it's registered as a
       "instance", as it's "magically" handled for us.  */

    /* a instance handler also only hands us one request at a time, so
       we don't need to loop over a list of requests; we'll only get one. */
    
    switch(reqinfo->mode) {

        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsClkState);
            break;

        /*
         * SET REQUEST
         *
         * multiple states in the transaction.  See:
         * http://www.net-snmp.org/tutorial-5/toolkit/mib_module/set-actions.jpg
         */
        case MODE_SET_RESERVE1:
                /* or you could use netsnmp_check_vb_type_and_size instead */
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;

        case MODE_SET_RESERVE2:
            /* XXX malloc "undo" storage buffer */
           // if (/* XXX if malloc, or whatever, failed: */) {
            //    netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_RESOURCEUNAVAILABLE);
          //  }
            break;

        case MODE_SET_FREE:
            /* XXX: free resources allocated in RESERVE1 and/or
               RESERVE2.  Something failed somewhere, and the states
               below won't be called. */
            break;

        case MODE_SET_ACTION:
	    //value =  *(requests->requestvb->val.integer);
		/*cmd = ftsSetCmd_make_scalar(requests, FTS_SET_SCALAR_FRAME_CLK_STATE);
		ftsSetCmd_send(cmd);

		
		ret = fts_scalar_set_process(cmd->requests);
		if (ret != 0)
			break;
		*/
		fts_scalar_data.ftsClkState = *(requests->requestvb->val.integer);
		fts_scalar_save();
		

		//fts_scalar_data.ftsClkState = *(requests->requestvb->val.integer);
		//fts_scalar_save();
		//strcpy(var_ftsRefCfg, requests->requestvb->val.string);
            //rc = netsnmp_arch_ip_scalars_ipDefaultTTL_set(value);
            //if ( 0 != rc ) {
              //  netsnmp_set_request_error(reqinfo, requests, rc);
           // }


			///* XXX: perform the value change here */
			// if (/* XXX: error? */) {
			//    netsnmp_set_request_error(reqinfo, requests, /* some error */);
			// }
            break;

        case MODE_SET_COMMIT:
         //   /* XXX: delete temporary storage */
          //  if (/* XXX: error? */) {
           //     /* try _really_really_ hard to never get to this point */
           //     netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_COMMITFAILED);
           // }
            break;

        case MODE_SET_UNDO:
         //   /* XXX: UNDO and return to previous value for the object */
         //   if (/* XXX: error? */) {
         //       /* try _really_really_ hard to never get to this point */
          //      netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_UNDOFAILED);
           // }
            break;

        default:
            /* we should never get here, so this is a really bad error */
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsClkMode(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;
	fts_set_cmd *cmd;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsClkMode);
            break;

        case MODE_SET_RESERVE1:
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;
        case MODE_SET_RESERVE2:
            break;
        case MODE_SET_FREE:
            break;
        case MODE_SET_ACTION:
			/*
			cmd = ftsSetCmd_make_scalar(FTS_SET_CMD_SCALAR_CLK_STATE,int data);
			ftsSetCmd_send(cmd);
			*/
			fts_scalar_data.ftsClkMode = *(requests->requestvb->val.integer);
			fts_scalar_save();
            break;
        case MODE_SET_COMMIT:
            break;
        case MODE_SET_UNDO:
            break;

        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsClkTimeAccuracy(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsClkTimeAccuracy);
            break;



        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsClkFreqAccuracy(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
    case MODE_GET:
        snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                 fts_scalar_data.ftsClkFreqAccuracy);
        break;

    default:
        snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsClkTimeThreshold(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsClkTimeThreshold);
            break;

        case MODE_SET_RESERVE1:
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;
        case MODE_SET_RESERVE2:
            break;
        case MODE_SET_FREE:
            break;
        case MODE_SET_ACTION:
			fts_scalar_data.ftsClkTimeThreshold = *(requests->requestvb->val.integer);
			fts_scalar_save();
            break;
        case MODE_SET_COMMIT:
            break;
        case MODE_SET_UNDO:
            break;

        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsClkGrade(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsClkGrade);
            break;
        case MODE_SET_RESERVE1:
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;
        case MODE_SET_RESERVE2:
            break;
        case MODE_SET_FREE:
            break;
        case MODE_SET_ACTION:
			fts_scalar_data.ftsClkGrade = *(requests->requestvb->val.integer);
			fts_scalar_save();
            break;
        case MODE_SET_COMMIT:
			
            break;
        case MODE_SET_UNDO:
            break;

        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsClkCurrentStateLast(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_UNSIGNED,
                                     fts_scalar_data.ftsClkCurrentStateLast);
            break;

        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}



int
handle_ftsClkClass(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsClkClass);
            break;


        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsNtpNums(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsNtpNums);
            break;

        case MODE_SET_RESERVE1:
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;
        case MODE_SET_RESERVE2:
            break;
        case MODE_SET_FREE:
            break;
        case MODE_SET_ACTION:
			fts_scalar_data.ftsNtpNums = *(requests->requestvb->val.integer);
			fts_scalar_save();
            break;
        case MODE_SET_COMMIT:
            break;
        case MODE_SET_UNDO:
            break;
        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode );
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsPtpNums(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;


    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_integer(requests->requestvb, ASN_INTEGER,
                                     fts_scalar_data.ftsPtpNums);

			break;
        case MODE_SET_RESERVE1:
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;
        case MODE_SET_RESERVE2:
            break;
        case MODE_SET_FREE:
            break;
        case MODE_SET_ACTION:
			fts_scalar_data.ftsPtpNums = *(requests->requestvb->val.integer);
			fts_scalar_save();
            break;
        case MODE_SET_COMMIT:
            break;
        case MODE_SET_UNDO:
            break;

        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode);
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_ftsTimingCfg(netsnmp_mib_handler *handler,
                          netsnmp_handler_registration *reginfo,
                          netsnmp_agent_request_info   *reqinfo,
                          netsnmp_request_info         *requests)
{
    int ret;

    switch(reqinfo->mode) {
        case MODE_GET:
            snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
                     fts_scalar_data.ftsTimingCfg/* XXX: a pointer to the scalar's data */,
                     FTS_STRING_LEN /* XXX: the length of the data in bytes */);
            break;
        case MODE_SET_RESERVE1:
            ret = netsnmp_check_vb_type(requests->requestvb, ASN_INTEGER);
            if ( ret != SNMP_ERR_NOERROR ) {
                netsnmp_set_request_error(reqinfo, requests, ret );
            }
            break;
        case MODE_SET_RESERVE2:
            break;
        case MODE_SET_FREE:
            break;
        case MODE_SET_ACTION:
			strcpy(fts_scalar_data.ftsTimingCfg, requests->requestvb->val.string);
			fts_scalar_save();
            break;
        case MODE_SET_COMMIT:
            break;
        case MODE_SET_UNDO:
            break;

        default:
            snmp_log(LOG_ERR, "unknown mode (%d) in handle_ftsRefCfg\n", reqinfo->mode);
            return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}


