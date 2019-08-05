#include <stdio.h>
#include <string.h>

long long binpow(long long a, long long b, long long m)
{ //费马小定理，见OI Wiki模意义下快速幂
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(void)
{
    int n, m, k, x;
    scanf("%d%d%d%d", &n, &m, &k, &x);
    long long result = ((((m % n) * binpow(10, k, n)) % n) + (x % n)) % n;
    printf("%lld", result);
    return 0;
}