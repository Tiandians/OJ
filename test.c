#include <stdio.h>
#include <math.h>
long long f(long long x)
{
    if(x==0)
    return 1;
    else
        return x * f(x - 1);

}
int main(void)
{
    long long a;
    scanf("%lld", &a);
    printf("%lld", f(a));
    return 0;
}