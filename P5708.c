#include <stdio.h>
#include<math.h>

int y(float a)
{
    a *= 10;
    if (((int)a - 0.5) == (int)a)
        return 1;
        else
            return 0;
}
int main(void)
{
    float a, b, c, p, s;
    scanf("%f%f%f", &a, &b, &c);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", y(s)?s+0.1:s);

    return 0;
}