#ifndef _DELAY_H_
#define _DELAY_H_

#include "main.h"

void Soft_Delay_Ms(uint delay_t);
void Start_Timeout_Ms(uchar t_ms);
void Stop_Timeout();
void Hard_Delay_50Ms(uint delay_t);
void Hard_Delay_Lower50Ms(uchar delay_t);
void Hard_Delay_Ms(uint delay_t);

#endif /*_DELAY_H_*/