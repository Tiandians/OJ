#include <stdio.h>
int main(void)
{
    int k;
    scanf("%d", &k);
    int sum = 0;
    for (int time = 1, day = 1, count = 0; time <= k; time++) //time=天数，day=金币数，count记录该金币第n天
    {
        sum += day; //获得金币
        count++;
        if (count == day)
        {
            count = 0;
            day++;
        }
    }
    printf("%d", sum);
    return 0;
}