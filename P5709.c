#include <stdio.h>
int main(void)
{
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    if (s == 0)
        printf("%d", m);
    else if (s >= m * t)
        printf("0");
    else
    {
        m = m - s / t - (s % t ? 1 : 0);
        printf("%d", m);
    }
    return 0;
}