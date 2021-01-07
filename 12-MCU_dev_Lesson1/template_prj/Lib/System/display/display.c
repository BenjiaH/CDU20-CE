#include "display.h"
#include "delay.h"

//共阴数码管段选表
uchar code tabel[] =
{
    //0     1     2     3     4     5     6     7     8
    0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F,
    //9     A     B     C     D     E     F     H     L
    0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71, 0x76, 0x38,
    //n     u     -     熄灭
    0x37, 0x3E, 0x40, 0x00
};

//求位数
uint Get_Digits(unsigned long n)
{
    uint count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
    if(count > 8)//判断是否符合要求（最多八位数）
    {
        return 0;
    }
    else
    {
        return count;
    }
}

void Display_Number(uchar digit, uchar num)
{
    P0 = 0XFF;//给P2一个初始值,清除断码
    WE = 1;//打开位选锁存器
    P0 &= ~(1 << digit);
    WE = 0;//关闭位选锁存器

    DU = 1;//打开段选锁存器
    P0 = tabel[num];
    DU = 0;//关闭段选锁存器
    Soft_Delay_Ms(5);
}

//求幂
unsigned long pow(uint base, uint exponent)
{
    unsigned long result = 1;
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    return result;
}

void Display(unsigned long num)
{
    uchar i, num_digits = Get_Digits(num);//循环变量 位数
    unsigned long tmp;
    uchar digits[8] = {0};
    for(i = 0; i < num_digits; i++)
    {
        tmp = pow(10, num_digits - 1 - i);
        digits[i] = num / tmp % 10;//取第i位
        Display_Number(i, digits[i]);;//显示第i位
    }
}
