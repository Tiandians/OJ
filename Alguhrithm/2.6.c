#include <stdio.h>
int main(void)
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) == 3 && (a || b || c))
    {
        double sum = (double)a / b;
        printf("%.*f\n",c, sum);
    }
    return 0;
}