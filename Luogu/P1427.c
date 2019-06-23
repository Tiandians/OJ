#include <stdio.h>

int main(void)
{
    int number[100];
    int x = 1;//第一次写的时候没有初始化x,注意for有不执行的风险。记住必须初始化循环变量
    for (int i = 0; i <= 99; i++)//初始化数组
        number[i] = 0;
    for (int count = 0; x != 0; count++)//赋值
    {
        scanf("%d", &x);
        number[count] = x;
    }
    for (int i = 99; i >= 0; i--)
    {
        if(number[i] != 0)
            printf("%d ", number[i]);
    }
    return 0;
}