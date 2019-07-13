#include <stdio.h>

void temperatures(double hs);

int main(void)
{
    double hs;
    while (scanf("%lf", &hs) == 1)
        temperatures(hs);
    return 0;
}

void temperatures(double hs)
{
    const double toks = 273.16, toss = 32.0;
    double ss = 5.0 / 9.0 * (hs - toss);
    double ks = ss + toks;
    printf("%.2lf is hs, %.2lf is ss, %.2lf is ks.\n", hs, ss, ks);
}