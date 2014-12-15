/*
 * OsekApi.h
 *
 *  Created on: 14/12/2014
 *      Author: sebas
 */

#ifndef OSEKAPI_H_
#define OSEKAPI_H_

typedef unsigned char TaskType;
typedef unsigned int EventMaskType;
typedef unsigned char StatusType;
typedef TaskType* TaskRefType;

extern StatusType WaitEvent(EventMaskType Mask);
extern StatusType GetTaskID(TaskRefType TaskID);
extern StatusType SetEvent(TaskType TaskID, EventMaskType Mask);
extern StatusType ClearEvent(EventMaskType Mask);

extern void ErrorHook(void);

#endif /* OSEKAPI_H_ */