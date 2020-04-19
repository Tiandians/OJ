#include <stdio.h> //这道程序用了点小技巧，把0-999各数的火柴棒直接表示出来，查表即可


int num[1000] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main(void)
{
    for (int i = 10; i <= 99; i++)
    {
        num[i] = num[i / 10] + num[i % 10];
    }
    for (int i = 100; i <= 999; i++)
    {
        num[i] = num[i / 100] + num[i / 10 % 10] + num[i % 10];
    }
    int count = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= 999; i++)
    {
        for (int j = 0; j <= 999; j++)
        {
            int sum = i + j;
            if (sum > 999)
                continue;
            if (num[i] + 2 + num[j] + 2 + num[sum] == n)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}