#include <stdio.h> //这是一道博弈论题目，详情请看洛谷题解

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int s;
        scanf("%d", &s);
        if (s % 2 == 0)
            printf("pb wins\n");
        else
            printf("zs wins\n");
    }
    return 0;
}