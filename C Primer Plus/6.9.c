#include <stdio.h>
#include <string.h>

double work(double a, double b)
{
    return (a - b) / (a * b);
}

int main(void)
{
    double a, b;
    printf(":");
    while(scanf("%lf%lf", &a, &b)==2)
    {
        printf("%.6lf\n:", work(a, b));
    }
    return 0;
}