#include <math.h>
#include <stdio.h>

int main(void)
{
    int s, v;
    scanf("%d%d", &s, &v);
    int tmin = s / v + (s / v ? 11 : 10) + (v == 1 ? -1 : 0);
    int h = 7, min = 60;
    min -= tmin % 60;
    h -= tmin / 60;
    printf("%02d:%02d", (h < 0 ? 24 + h : h), min);
    return 0;
}