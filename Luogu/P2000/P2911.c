#include <stdio.h>

int num[85];

int main(void)
{
    int s1, s2, s3;
    scanf("%d%d%d", &s1, &s2, &s3);
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
                num[i + j + k]++;
        }
    }
    int hi = 0, hib = 0;
    for (int i = 1; i <= 84; i++)
    {
        if (num[i] > hi)
        {
            hi = num[i];
            hib = i;
        }
    }
    printf("%d", hib);
    return 0;
}