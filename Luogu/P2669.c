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
    }//其实不需要这样。连续N天中每天获得N个硬币所以每周期获得N*N个硬币
    printf("%d", sum);
    return 0;
}