#include <stdio.h>
#include <math.h>
int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b, a % b);
}
int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}