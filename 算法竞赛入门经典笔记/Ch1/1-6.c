//triangle
#include <stdio.h>
int main(void)
{
    double a, b, c, t;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > b)//先排序
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    if (c - b <=a && a + b <= c)//先验证是不是三角形
        printf("not a triangle");
    else if (a * a + b * b != c * c)//验证勾股定理
    {
        printf("no");
    }
    else
        printf("yes");
    return 0;
}