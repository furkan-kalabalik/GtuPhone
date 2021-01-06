/*
 * call_process.h
 *
 *  Created on: Dec 20, 2020
 *      Author: fk97
 */

#ifndef INC_CALL_PROCESS_H_
#define INC_CALL_PROCESS_H_

typedef enum
{
	NO_CALL,
	INITIATE_CALL,
	INITIATE_INCOMING_CALL,
	ANSWER_CALL,
	DIALING,
	CHECK_CALL_STATE,
	TERMINATE_CALL,
	ACCEPT_CALL,
} te_call_state;

typedef enum
{
	MO,
	MT
}te_call_type;

typedef struct
{
	char name[16];
	char number[16];
}ts_phonebook_entry;

void call_detected();

#endif /* INC_CALL_PROCESS_H_ */
