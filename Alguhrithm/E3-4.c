#include <stdio.h>
#define maxn 1010

int main(void)
{
    int n, a[maxn], b[maxn];
    int kase = 0;
    while(scanf("%d", &n)==1&&n)//大循环
    {
        printf("Game %d:\n", ++kase);
        for (int i = 0; i < n;i++)//答案序列
            scanf("%d", &a[i]);
        for (;;)
        {
            int A = 0, B = 0;
            for (int i = 0; i < n;i++)
            {
                scanf("%d", &b[i]);//读用户序列
                if(a[i]==b[i])//位置正确
                    A++;
            }
            if(b[0]==0)
                break;
            for (int d = 1; d <= 9;d++)//指定检测数字
            {
                int c1 = 0, c2 = 0;
                for (int i = 0; i < n;i++)
                {
                    if(a[i]==d)//在答案序列中出现次数
                        c1++;
                    if(b[i]==d)//在用户序列中出现次数
                        c2++;
                }
                if(c1<c2)
                    B += c1;
                else
                    B += c2;
            }
            printf("    (%d,%d)\n", A, B - A);
        }
    }
    return 0;
}