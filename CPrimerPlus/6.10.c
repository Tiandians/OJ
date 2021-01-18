#include <stdio.h>

int sqr(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i * i;
    }
    return sum;
}
int main(void)
{
    int a, b;
    printf("Enter lower and upper integer limits:");
    while (scanf("%d%d", &a, &b) == 2 && a < b)
    {
        printf("The sums of the squares from %d to %d is %d\n", a * a, b * b, sqr(a, b));
        printf("Enter next set of limits:");
    }
    printf("Done");
    return 0;
}