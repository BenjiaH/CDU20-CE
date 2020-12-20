#include "stdio.h"
#include "math.h"

int main(void)  //主函数
{
    int a = 0, b = 0, c = 0;    //定义一元二次方程参数
    float delta = 0.0;          //定义delta
    float x1 = 0.0, x2 = 0.0;   //定义结果

    printf("Please enter a:");
    scanf("%d", &a);            //键盘输入a
    printf("Please enter b:");
    scanf("%d", &b);            //键盘输入b
    printf("Please enter c:");
    scanf("%d", &c);            //键盘输入c
    printf("\n");

    delta = b * b - 4 * a * c;  //计算delta

    printf("The result of (%d)x^2+(%d)x+(%d)=0:\n", a, b, c);
    //delta < 0 无根
    if(delta < 0)
    {
        printf("no roots.\n");
    }
    //delta == 0 一个根
    else    if(delta == 0)
    {
        x1 = (b * -1) / (2 * a);                    //计算x1即可
        printf("one root.\n");
        printf("x1 = x2 = %f\n", x1);               //输出结果
    }
    //delta > 0 两个根
    else
    {
        x1 = ((b * -1) + sqrt(delta)) / (2 * a);    //计算x1
        x2 = ((b * -1) - sqrt(delta)) / (2 * a);    //计算x2
        printf("two roots.\n");
        printf("x1 = %f\nx2 = %f\n", x1, x2);       //输出结果
    }

    // if(delta < 0)
    // {
    //     printf("delta < 0\n");
    // }

    fflush(stdin);                                  //清除键盘输入缓存
    getchar();
    return 0;
}
