#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))//注意预处理器定义函数的问题！
int s[25 * 2500 + 5];

int main(void)
{
    int f[2] = {11, 21};
    char c;
    int count = 0;
    while ((c = getchar()) != 'E')
    {
        if (c == 'W')
            s[++count] = 1;
        else if (c == 'L')
            s[++count] = 0;
    }
    for (int k = 0; k < 2; k++) //两种赛制循环
    {
        int w = 0, l = 0;                //计分板
        for (int i = 1; i <= count; i++) //计分
        {
            w += s[i];
            l += 1 - s[i];
            if ((max(w, l) >= f[k]) && (abs(w - l) >= 2))
            {
                printf("%d:%d\n", w, l);
                w = l = 0;
            }
        }
        printf("%d:%d\n", w, l);
        if (k == 0)
            putchar('\n');
    }
    return 0;
}