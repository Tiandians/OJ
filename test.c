#include <stdio.h>
#include <math.h>
double powe(double n, int p)
{
    double powe = 1;
    for (int i = 1; i <= p; i++)
        powe *= n;
    return powe;
}
int main(void)
{
    double n[4], p[4], c[4];
    for (int i = 0; i <= 3;i++)
    {
        scanf("%lf %lf", &n[i], &p[i]);
        c[i] = powe(n[i], p[i]);
    }
    for (int i = 0; i <= 3; i++)
        printf("%.0lf的%.0lf次幂=%.4g\n", n[i], p[i], c[i]);
        return 0;
}