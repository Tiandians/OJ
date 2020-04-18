#include <stdio.h>

int prin(int x);
int main(void)
{
    
    int floor, a=1;
    scanf("%d", &floor);
    for (int i = 1; i <= floor;i++)
    {
        prin(floor - i);
        for (int j = a; j >=1;j--)
            putchar('A');
        a = a + 2;
        prin(floor - i);
        putchar('\n');
    }
    return 0;
}

int prin(int x)
{
    for (int i = 1; i <= x;i++)
        putchar(' ');
    return 0;
}