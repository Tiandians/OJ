#include<stdio.h>
int main(void)
{
    int a, b, max_hours = 0, unhappyday = 0;
    for(int weekday = 1; weekday <= 7; ++weekday){
        scanf("%d\n%d", &a, &b);
        if(a + b > 8 && a + b > max_hours)
        {
            max_hours = a + b;
            unhappyday = weekday;
        }
    }
    printf("%d", unhappyday);
    return 0;
}
