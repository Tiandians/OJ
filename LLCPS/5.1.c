#include <stdio.h>
#include <math.h>

double myround(double x);

int main(void)
{
    double a;
    scanf("%lf", &a);
    printf("%.1lf", myround(a));
    return 0;
}

double myround(double x)
{
    if(x > 0)
        return floor(x);
    else if(x < 0)
        return ceil(x);
    else
        return 0;
}