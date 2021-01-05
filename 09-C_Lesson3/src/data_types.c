#include "stdio.h"

int main(void)  //主函数
{
    int a;      //声明变量a
    float b;    //声明变量b
    char c;     //声明变量c

    a = 5;      //赋值
    b = 3.14;
    c = 'a';

    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);

    getchar();
    return 0;
}
