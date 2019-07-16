#include <stdio.h>

long long gcd(long long x, long long y)//最小公约数（约分）
{
    if(x%y==0)
        return y;
    else
        return gcd(y, x % y);
}

int main(void)
{
    long long a, b, c, t;
    scanf("%lld%lld%lld", &a, &b, &c);
    if(a>b) {//排序
        t = a;
        a = b;
        b = t;
    }
    if(a>c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b>c)
    {
        t = b;
        b = c;
        c = t;
    }

    printf("%lld/%lld", a / gcd(a, c), c / gcd(a, c));
    return 0;
}