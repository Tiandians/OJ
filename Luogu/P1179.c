#include <stdio.h>

int kk(int a)
{
    if(a<10)
    {
        if(a==2)
            return 1;
        else
            return 0;
    }
    else
    {
        if(a%10==2)
            return kk(a / 10) + 1;
        else
            return kk(a / 10);
    }
}

int main(void)
{
    
    int a, b;
    int sum = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        sum += kk(i);
    }
    printf("%d", sum);
   
    return 0;
}