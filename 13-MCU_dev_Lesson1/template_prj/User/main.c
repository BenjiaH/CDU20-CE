#include "reg52.h"
#include "main.h"
#include "delay.h"
#include "display.h"

void main(void)
{
    while(1)
    {
        P1_3 = 0;
        Hard_Delay_Ms(500);
        P1_3 = 0XFF;
        Hard_Delay_Ms(500);
        Display(123);
    }
}