/*
 * sms_process.h
 *
 *  Created on: Dec 22, 2020
 *      Author: furkankalabalik
 */

#ifndef INC_SMS_PROCESS_H_
#define INC_SMS_PROCESS_H_

typedef enum
{
	NO_SMS,
	SEND_SMS,
	COMPLETED_SMS,
}te_sms_state;

typedef struct
{
	char sender[16];
	char message[96];
}ts_rec_message;

#endif /* INC_SMS_PROCESS_H_ */
