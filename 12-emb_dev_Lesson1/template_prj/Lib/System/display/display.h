#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "main.h"

sbit DU = P2^6;//数码管段选
sbit WE = P2^7;//数码管段选

//共阴数码管段选表
extern uchar code tabel[];

uint Get_Digits(unsigned long n);
void Display_Number(uchar wei, uchar num);
unsigned long pow(uint base,uint exponent);
void Display(unsigned long num);

#endif /*_DISPLAY_H_*/