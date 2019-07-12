#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (; a <= b;a++)
        printf("%-5d %-5d %-5d\n", a, a * a, a * a * a);
    return 0;
}