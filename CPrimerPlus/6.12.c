#include <stdio.h>

double xa(int n)
{
    double sum = 0;
    for (double i = 1.0; i <= n; i++)
        sum += 1.0 / i;
    return sum;
}

double xb(int n)
{
    double sum = 0;
    int count = 1;
    for (double i = 1.0; i <= n; i++)
    {
        if (count % 2 == 0)
            sum -= 1.0 / i;
        else
            sum += 1.0 / i;
        count++;
    }
    return sum;
}

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
        printf("%.16lf %.16lf", xa(n), xb(n));
    return 0;
}