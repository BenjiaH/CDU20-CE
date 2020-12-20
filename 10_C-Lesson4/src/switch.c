#include "stdio.h"
#include "math.h"

int main(void)  //主函数
{
    int val = 0;    //定义val

    for (int i = 0; i < 5; i++)
    {
        val = i;
        printf("val = %d\n", val);
        switch (val)
        {
            case    0:  printf("after switch: val = %d\n", val);    break;
            case    1:  printf("after switch: val = %d\n", val);    break;
            case    2:  printf("after switch: val = %d\n", val);    break;
            default  :  printf("after switch: val = ?\n");          break;
            break;
        }
    }

    getchar();
    return 0;
}
