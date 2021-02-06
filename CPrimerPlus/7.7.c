#include<stdio.h>

int main(void)
{
    double money, hours, shui, jing;
    scanf("%lf", &hours);
    if(hours>40)
        money = 400+(hours - 40) * 1.5 / 10;
    else
        money = hours * 10;
    if(money<=300)
        shui = money * 0.15;
    else if(money<=450)
        shui = 300 * 0.15 + (money - 300) * 0.2;
    else
        shui = 300 * 0.15 + 150 * 0.2 + (money - 450) * 0.25;
    jing = money - shui;
    printf("%lf %lf %lf", money, shui, jing);
    return 0;
}