#include "stdio.h"

int main(void)
{
    int condition = 0;      //条件

    while(condition)
    {
        printf("execute while");
    }

    do
    {
        printf("execute do...while");
    }while(condition);

    getchar();
    return 0;
}