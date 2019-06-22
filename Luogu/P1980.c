#include <stdio.h>
int main(void)
{
    int n, x, p = 0;
    scanf("%d %d", &n, &x);
    for (int count = 1; count <= n; count++)
    {
        if (count % 10 == x){
            p++;
        }
        if (count / 10 % 10 == x && count >= 10){
            p++;
        }
        if (count / 100 % 10 == x && count >= 100)
            p++;
        if (count / 1000 % 10 == x && count >= 1000)
            p++;
        if (count / 10000 % 10 == x && count >= 10000)
            p++;
        if (count / 100000 % 10 == x && count >= 100000)
            p++;
        if (count / 1000000 == x && n >= 1000000)
            p++;
        printf("%d:%d\n", count, p);
    }
    printf("%d", p);
    return 0;
}