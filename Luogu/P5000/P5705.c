#include <stdio.h>
int main(void)
{
    char a[6];
    scanf("%s", a);
    for (int i = 4; i >= 0;i--)
        putchar(a[i]);
    return 0;
}