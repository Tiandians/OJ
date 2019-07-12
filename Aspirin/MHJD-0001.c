#include <stdio.h>
int main(void)
{
    unsigned short int a1, d;
    unsigned int n, sn;
    scanf("%hu %hu %u", &a1, &d, &n);

    sn = n * a1 + n * (n - 1) / 2 * d;
    printf("%d", sn);
    return 0;
}