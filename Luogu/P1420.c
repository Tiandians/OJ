#include <stdio.h>
int main(void)
{
    int pre = -1, cur, n;
    int high = 0, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        //printf("r:%d p:%d c:%d\n", i, pre, cur);
        scanf("%d", &cur);  //当前指针
        if (cur == pre + 1) //如果连续
            count++;        //计数
        else
            count = 0;    //重置

        if (count > high) //计数新高
            high = count; //记录
        pre = cur;        //指针移动
        //printf("p:%d c:%d count = %d, high = %d\n", pre, cur, count, high);
    }
    high++;
    printf("%d", high);
    return 0;
}