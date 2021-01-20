#include <stdio.h>
#define HANG tot[0]
#define LIE tot[1]
#define MAX 39

void create(int n);

int huan[MAX][MAX]; //0-38

int main(void)
{
    int n;
    scanf("%d", &n);
    create(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", huan[i][j]); //第1行，第j列
        putchar('\n');
    }
    return 0;
}

void create(int n) //n表示幻方阶数
{
    int tot[2] = {0, 0};
    for (int i = 1; i <= n * n; i++)
    {
        //printf("Round:%d:tot:hang:%d.lie:%d\n", i, HANG, LIE);
        if (i == 1)                           //0.1
            huan[0][LIE = n / 2] = i;         //第一行中间
        else if (HANG == 0 && LIE != (n - 1)) //1.第一行，不再最后一列
            huan[HANG = n - 1][++LIE] = i;    //最后一行，右一列
        else if (LIE == (n - 1) && HANG != 0) //2.最后一列，不在第一行
            huan[--HANG][LIE = 0] = i;
        else if (HANG == 0 && LIE == n - 1) //3.
            huan[++HANG][LIE] = i;
        else if (HANG != 0 && LIE != n - 1) //4.
        {
            if (huan[HANG - 1][LIE + 1] == 0)
                huan[--HANG][++LIE] = i;
            else
                huan[++HANG][LIE] = i;
        }
        /*for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                printf("%d ", huan[i][j]); //第1行，第j列
            putchar('\n');
        }
        printf("Round%dend,now:tot:hang%d.lie:%d\n", i, HANG, LIE);*/
    }
}