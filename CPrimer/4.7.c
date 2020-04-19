#include <float.h>
#include <stdio.h>
int main(void)
{
    double a = 1.0 / 3.0;
    float b = 1.0 / 3.0;
    printf("%.6lf %.6f\n", a, b);
    printf("%.12lf %.12f\n", a, b);
    printf("%.16lf %.16f\n", a, b);
    printf("%.16lf %.16f", DBL_DIG, FLT_DIG);
    return 0;
}