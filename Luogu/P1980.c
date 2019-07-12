#include <stdio.h>//最开始时使用7个if分支逐位比对，在输入为1000000 0时进入无限循环，最终都没有找到结果。后来尝试使用递归成功AC
int count = 0;//全局变量
void is_count(int k, int x);

int main(void)
{
    //freopen("testdata.in", "r", stdin);
    //freopen("testdata.out", "w", stdout);

    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)//枚举
    {
        is_count(i, x);
    }
    printf("%d", count);
    return 0;
}

void is_count(int k, int x)//递归方案：对于一位数：比对；对于非一位数：取个位，比对，丢弃最后一位，再次递归
{
    if (k < 10 && k == x)//比对
        count++;
    if (k >= 10)
    {
        is_count(k % 10, x);//取个位，比对
        k /= 10;//丢弃最后一位
        is_count(k, x);//再次递归
    }
}