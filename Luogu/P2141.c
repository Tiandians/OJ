#include <stdio.h>
int main(void)
{
    int n, count = 0;
    scanf("%d", &n);
    n--;
    int a[n];
    //printf("%d", n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        for (int x = 0; x <= n - 1; x++)
        {
            for (int y = x + 1; y <= n; y++)
            {
                if (a[i] == a[x] + a[y])
                {
                    count++;
                    break;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}