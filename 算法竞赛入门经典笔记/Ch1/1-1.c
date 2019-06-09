//平均数1
#include <stdio.h>
int main(void)
{
    double a, b, c, ave;

    scanf("%lf %lf %lf", &a, &b, &c);
    ave = (a + b + c) / 3.0;
    printf("\nThe ave is:%.3lf", ave);
    return 0;
}