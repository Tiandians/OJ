#include <stdio.h>
int main(void)
{
    int day, weekday,sum=0;
    scanf("%d %d", &weekday, &day);
    for (int count = 1; count <= day; count ++)
    {
        if(weekday == 8)//星期从8到1
            weekday = 1;
        if(weekday >=1 && weekday <=5)//工作日递增
            sum += 250;
        weekday++;//星期递增
    }
    printf("%d", sum);
    return 0;
}