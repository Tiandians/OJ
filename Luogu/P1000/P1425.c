#include <stdio.h>
int main(void)
{
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int z = 60 * a + b;
        int z1 = 60 * c + d;

        int e = (z1 - z) / 60;
        int f = (z1 - z) % 60;

        printf("%d %d", e, f);

        return 0;
}