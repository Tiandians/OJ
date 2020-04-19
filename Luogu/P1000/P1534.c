#include <stdio.h>
int main(void)
{
    int n, today = 0, h = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        today = today + a + b - 8;
        h += today;
    }
    printf("%d", h);
    return 0;
}