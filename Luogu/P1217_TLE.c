#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define MAXN 15

bool is_palind(const char a[])//这里的算法超时了。最开始使用倒序打印再逐一比较，第二次直接比较，都超时了。不应该枚举再验证，应直接生产回文数
{
    if(strlen(a)==1)
        return true;
    for (int i = 0, j = strlen(a) - 1;i<=(strlen(a)/2)-1;i++, j--)
    {
        if(a[i]!=a[j])
            return false;
    }
        return true;
}

bool is_primer(int x)
{
    for (int i = 2; i * i <= x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a%2==0)
        a++;
    for (int i = a; i <= b;i+=2)//第三次试图改进，使用了i+=2(因为偶数不可能是奇数，可以缩短枚举时间)
    {
        char v[MAXN];
        sprintf(v, "%d", i);
        if(is_palind(v))
        {
            if(is_primer(i))
                printf("%d\n", i);
        }
    }
    return 0;
}