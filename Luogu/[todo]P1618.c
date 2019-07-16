#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool xixi(int a, int b, int c)
{
    int num[10];
    memset(num, 0, sizeof(num));
    for (int p = a; p > 0;)
    {
        num[p % 10] = 1;
        p /= 10;
    }
    for (int p = b; p > 0;)
    {
        num[p % 10] = 1;
        p /= 10;
    }
    for (int p = c; p > 0;)
    {
        num[p % 10] = 1;
        p /= 10;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!num[i])
            return 0;
    }
    return 1;
}

int main(void)
{
    freopen("testdata.out", "w", stdout);
    freopen("testdata.in", "r", stdin);
    int a, b, c;
    bool flag = 1;
    scanf("%d%d%d", &a, &b, &c);
    for (int a1 = 111; a1 <= 999; a1++)
    {
        int b2 = a1 * (b / a);
        int c3 = a1 * (c / a);
        if (xixi(a1, b2, c3)&&b2<=999&&c3<=999)
        {
            printf("%d %d %d\n", a1, b2, c3);
            flag = 0;
        }
    }
    if (flag)
        printf("No!!!");
    return 0;
}