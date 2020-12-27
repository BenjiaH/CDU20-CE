#include "stdio.h"

int max(int a, int b);  //函数声明

int main(void)
{
    int m = 0;          //声明被比较的值a，并初始化
    int n = 0;          //声明被比较的值b，并初始化
    int bigger = 0;     //声明比较的结果值

    //待比较的值
    m = 6;
    n = 3;

    // bigger = max(m, n);
    // printf("bigger:%d",bigger);

    printf("bigger:%d",max(m, n));

    // if(m > n)
    // {
    //     printf("bigger:%d",m);
    // }
    // else    if(n > m)
    // {
    //     printf("bigger:%d",n);
    // }

    getchar();
    return 0;
}

int max(int a, int b)
{
    int ret = 0;        //声明返回值

    if(a > b)
    {
        ret = a;
    }
    else    if(b > a)
    {
        ret = b;
    }
    else        //b==a
    {
        ret = a;
    }

    return ret;
}


