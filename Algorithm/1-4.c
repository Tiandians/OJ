//sin and cos
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main(void)
{
    int c;
    scanf("%d", &c);
    double angle = (double)c * M_PI / 180;
    printf("sin = %lf, cos = %lf", sin(angle), cos(angle));
    return 0;
}