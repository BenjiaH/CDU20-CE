#include "delay.h"

//晶振的频率
#define OSC_FREQ (11059200UL)
//每个指令的振荡周期数（4,6,12）
#define OSC_PER_INST (12)
//初值计算
#define PRELOADMS(t) (65536 - t*(uint)(OSC_FREQ/(OSC_PER_INST*1000)))

/*软件延时*/
void Soft_Delay_Ms(uint delay_t)
{
	uint x, y;
	for(x = delay_t; x > 0; x--)
	{
		for(y = 114; y > 0; y--)
		{
			;
		}
	}
}

/*硬件延时初始化*/
void Start_Timeout_Ms(uchar t_ms)
{
	TMOD = 0X01;//设定工作模式 16位定时器计数模式
	TH0 = PRELOADMS(t_ms) / 256;
    TL0 = PRELOADMS(t_ms) % 256;
    TF0 = 0;//清溢出标志位
    ET0 = 0;//关定时器0的中断
    TR0 = 1;//启动定时器
}

/*停止硬件延时*/
void Stop_Timeout()
{
    TR0 = 0;
}

/*50ms硬件延时*/
void Hard_Delay_50Ms(uint delay_t)
{	
	uint i;
	if(delay_t <= 0)
	{
		return;
	}
	else
	{
		for(i = 0; i < delay_t / 50; i++)
		{
			Start_Timeout_Ms(50);
			while(!TF0);
			Stop_Timeout();
		}
	}
}

/*<50ms硬件延时*/
void Hard_Delay_Lower50Ms(uchar delay_t)
{
	if(delay_t <= 0)
	{
		return;
	}
	else
	{
		Start_Timeout_Ms(delay_t);
		while(!TF0);
		Stop_Timeout();
	}
}

/*硬件延时*/
void Hard_Delay_Ms(uint delay_t)
{
	uint Hard_Delay_50Ms_counter = delay_t / 50;//50ms硬件延时执行次数
	uchar Hard_Delay_Lower50Ms_time = delay_t % 50;//<50ms硬件延时执行次数
	
	Hard_Delay_50Ms(Hard_Delay_50Ms_counter * 50);
	Hard_Delay_Lower50Ms(Hard_Delay_Lower50Ms_time);
}

