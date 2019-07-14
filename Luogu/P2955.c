#include <stdio.h>//对于10^60这样的数据，不能使用long long，应使用字符串
#include <string.h>

char number[65];
void isodd(int x)
{
    if(x%2==0)
        printf("even\n");
    else
        printf("odd\n");
}

int main(void)
{
    long n;
    scanf("%ld",&n);
    for(int i = 1; i<=n;i++)
    {
        scanf("%s", number);
        int num = number[strlen(number) - 1] - 48;
        isodd(num);
    }
    return 0;
}