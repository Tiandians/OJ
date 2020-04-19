#include <stdio.h>
double avg(double i, double j);
int main(void)
{
    double i, f;
    scanf("%lf %lf", &i, &f);
    printf("%f", avg(i, f));
    return 0;
}

double avg(double i, double j)
{
    i = 1.0 / i;
    j = 1.0 / j;
    return 1/((i + j) / 2.0);
}