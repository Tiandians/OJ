#include<stdio.h>
int main(void)
{
    int a = 1, b = 1, c = 1;
    for (; a <= 9;a++)
    for (; b < +9;b++)
    for (; c <= 9; c++)
    printf("%d\n", a * 100 + b * 10 + c);
    return 0;
}