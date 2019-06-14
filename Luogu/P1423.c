#include<stdio.h>
int main(void)
{
    double s;
    scanf("%lf", &s);
    double total= 0;
    double step = 2.;
    int count = 0;
    while(total < s)//total<s，现在进入第二步
    {
        total += step;//第一步
        step *= 0.98;//计算第二步
        count++;//现在count应处于第一步
    }
    
    printf("%d", count);
    return 0;
}