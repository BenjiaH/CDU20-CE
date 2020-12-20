#include "stdio.h"

int main(void)
{
    int i = 0;      //声明循环变量 i
    int sum = 0;    //声明计算结果 sum

    for(i = 1; i <= 100; i++)
    // for(i = 1; i < 101; i++)
    {
        sum += i;
        // sum = sum + i;
    }
    printf("sum:%d\n", sum);

    getchar();
    return 0;
}