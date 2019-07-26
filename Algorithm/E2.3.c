//近似计算
#include<stdio.h>
int main(void)
{
    double s = 0;
    for (int n = 1;;n++)
    {
        if(1.e-10 > 1./n)
            break;
        if (n%2==1){
            s += 1. / n;
        }
        else
            s -= 1. / n;
        printf("%lf", s);

    }
    return 0;
}
