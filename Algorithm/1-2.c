//℉ TO ℃
#include <stdio.h>
int main(void)
{
    double f, c;
    scanf("%lf", &f);
    c = 5.0 * (f - 32.0) / 9.0;
    printf("The tempreture is %.3lf℃.", c);
    return 0;
}