#include <stdio.h>
int main(void)
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '0';
    while ((a = getchar()) != EOF)
    {
        if (c == 'k' && b == 's' && a == '/') //判断条件1
        {
            //printf("http://hls.videocc.net/source/3f25ea56e6/c/"); //前置附加条件
            while (d = getchar())
            {
                if (d == '"')//终止条件
                {
                    //printf("_1.m3u8");//后缀附加条件
                    putchar('\n');
                    goto gotoflag;
                }
                else
                    putchar(d);
            }
        }
        c = b;
        b = a;
    gotoflag:;
    }
    return 0;
}