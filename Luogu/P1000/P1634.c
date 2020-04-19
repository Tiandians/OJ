#include <stdio.h>//注意数据长度
#include <math.h>

int main(void)
{
    long x, n;
    scanf("%ld%ld", &x, &n);
    printf("%lld", (long long)pow(x + 1, n));
    return 0;
}