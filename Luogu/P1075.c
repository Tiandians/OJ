#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%lld", &n);
    for (long long i = 2; i * i <= n;i++)//注意i=2!!!!!
    {
        if(n%i==0)
        {
            printf("%lld", n / i);
        }
    }
    return 0;
}