#include <stdio.h>
#define fir 8.75
#define sec 9.33
#define thi 10.00
#define fou 11.20

void prin(void)
{
    for (int i = 1; i <= 26; i++)
        putchar('*');
    putchar('\n');
}

double shu(double money)
{
    double shui;
    if (money <= 300)
        shui = money * 0.15;
    else if (money <= 450)
        shui = 300 * 0.15 + (money - 300) * 0.2;
    else
        shui = 300 * 0.15 + 150 * 0.2 + (money - 450) * 0.25;
    return shui;
}

double moneyc(double hours, double grade)
{
    double money;
    if (hours > 40)
        money = hours * grade + (hours - 40) * 1.5 * grade;
    else
        money = hours * grade;
    return money;
}

int main(void)
{
    prin();
    printf("Enter the number corresponding to the desired pay reate or action:\n");
    printf("1) $8.75/hr\t\t2)9.33hr\n"
           "3)$10.00/hr\t\t4)$11.20/hr\n"
           "5)quit\n");
    prin();
    int a;
    do
        scanf("%d", &a);
    while (a < 1 || a > 5);
    if (a == 5)
        return 0;
    double hours, money, shui, jing;
    scanf("%lf", &hours);
    switch (a)
    {
    case 1:
        money = moneyc(hours, fir);
        break;
    case 2:
        money = moneyc(hours, sec);
        break;
    case 3:
        money = moneyc(hours, thi);
        break;
    case 4:
        money = moneyc(hours, fou);
    }
    shui = shu(money);
    jing = money - shui;
    printf("%lf %lf %lf", money, shui, jing);
    return 0;
}