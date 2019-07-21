#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int pre, cur;
    int count = 0, high = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &cur);
        if (i == 1)
        { //第一次，跳过
            pre = cur;
            continue;
        }
        if (pre < cur) //比较
        {
            count++;          //计数
            if (count > high) //更新记录
                high = count;
        }
        else //重置计数
            count = 0;
        pre = cur; //交换值
    }
    printf("%d", high + 1);
    return 0;
}