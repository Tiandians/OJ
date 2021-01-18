#include <stdio.h>
void large_of(double * x, double * y);
int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    large_of(&x, &y);
    printf("%f %f", x, y);
    return 0;
}

void large_of(double * x, double * y)
{
    double temp = (*x > *y) ? *x : *y;
    *x = *y = temp;
}