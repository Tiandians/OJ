#include <ctype.h>
#include <stdio.h>
#define C 12.01
#define H 1.008
#define O 16.00
#define N 14.01

double is_y(char c)
{
    if (c == 'C')
        return C;
    if (c == 'H')
        return H;
    if (c == 'O')
        return O;
    if (c == 'N')
        return N;
    return 0;
}

int main(void)
{
    char cur, next;
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; i++)
    {
        double sum = 0.0;
        cur = getchar();

        if (isupper(cur))//char
        {
        GG: //开始的地方
            next = getchar();//再读一个
            if (isupper(next))//是原子
            {
                sum += is_y(cur);//加上当前原子量
                cur = next;//下一个变当前
                goto GG; //回到开始的地方
            }
            else if (isdigit(next))//是数字
            {                    
                int p = next - 48;//数字和
                while (1)//重复读入
                {
                    char q = getchar();//下一个字符
                    if (isdigit(q))//是数字
                    {
                        p = p * 10 + q - 48;//累积和
                    }
                    else if (isupper(q))//是字符
                    {
                        sum += is_y(cur) * (double)p;//增加原子量
                        cur = q;//下一个变当前
                        goto GG;//回去
                    }
                    else//结束此轮循环
                    {
                        sum += is_y(cur) * p;
                        printf("%.3lf\n", sum);
                        goto next;
                    }
                }
            }
            else//换行
            {
                sum += is_y(cur);
                printf("%.3lf\n", sum);
                goto next;
            }
        }
    next:
        continue;
    }
    return 0;
}