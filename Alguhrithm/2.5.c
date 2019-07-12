#include <stdio.h>
#include <time.h>
int main(void)
{
    long a, b;
    while (scanf("%ld%ld", &a, &b) == 2 && (a || b))
    {
        double sum = 0.0;
        for (; a <= b; a++)
        {
            long long square = a * a;
            sum += 1 / (double)square;
            //printf("%d", square);
            //printf("%f\n", sum);
        }
        printf("%.5f\n", sum);
        printf("%.2f\n", (double)clock() / CLOCKS_PER_SEC);
    }
    return 0;
}