#include <stdbool.h>
#include <stdio.h>

int h[105];
int main(void)
{
    int n;
    scanf("%d", &n);    //n个人
    scanf("%d", &h[1]); //第一位
    printf("%d", h[1]); //直接打印
    for (int i = 2; i <= n; i++)
    {
        int temp;
        scanf("%d", &temp); //读取
        if (temp)           //取反
            h[i] = 1 - h[i - 1];//技巧：bool值的取反，用1-即可
        else //相同
            h[i] = h[i - 1];
        printf("%d", h[i]);
    }
    return 0;
}