#include <stdio.h>
int main(void)
{
    int t;
    int count = 0, sum = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char c;
        while ((c = getchar()) != '\n' && c != '\r')
        {
            if (c == 'X')
                count = 0;
            else
            {
                count++;
                sum += count;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}