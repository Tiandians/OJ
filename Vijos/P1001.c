#include <stdio.h>
#include <string.h>

int jisuan(int qimo, int banji, char ganbu, char xibu, int lunwen)
{
    int cur = 0;
    if (qimo > 80 && lunwen >= 1)
        cur += 8000;
    if (qimo > 85 && banji > 80)
        cur += 4000;
    if (qimo > 90)
        cur += 2000;
    if (qimo > 85 && xibu == 'Y')
        cur += 1000;
    if (banji > 80 && ganbu == 'Y')
        cur += 850;
    return cur;
}

int main(void)
{
    int n, highjx = 0, sum = 0;
    char highname[25];
    _Bool first = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char curname[25];
        int curqimo, curbanji, curlunwen, curjx;
        char curganbu, curxibu;
        scanf("%s%d%d", curname, &curqimo, &curbanji);
        getchar();
        curganbu = getchar();
        getchar();
        curxibu = getchar();
        scanf("%d", &curlunwen);

        curjx = jisuan(curqimo, curbanji, curganbu, curxibu, curlunwen);
        sum += curjx;

        if (curjx >= highjx) //判断
        {
            if (curjx > highjx) //更大
                first = 1;      //重置第一次
            highjx = curjx;     //记录最大的
            if (first)          //如果是第一次
            {
                memcpy(highname, curname, sizeof(curname)); //复制名字
                first = 0;                                  //不再是第一次
            }
        }
    }
    printf("%s\n", highname);
    printf("%d\n", highjx);
    printf("%d\n", sum);

    return 0;
}