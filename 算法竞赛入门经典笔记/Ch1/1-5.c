//discount
#include<stdio.h>
#define CT 0.85
int main(void)
{
    int yf;
    scanf("%d", &yf);
    double z = yf * 95;
    if(z < 300)
        printf("You should pay: %.2lf", z);
    else
        printf("You should pay: %.2lf", z * CT);
    return 0;
}