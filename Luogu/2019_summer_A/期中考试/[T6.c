#include <stdio.h>

int main(void)
{
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    int sum = 0;
    int chuqian = 0;
    //printf("zhouqi\tday\tchuqian\tsum\n");
    for (int zhouqi = 1; zhouqi <= n; zhouqi++)//周期循环
    {
        for (int day = 1; day <= m; day++)//天循环
        {
            if (day == 1){//自动生成1元
                chuqian++;
                sum += chuqian;//取款
                //printf("%d\t%d\t%d\t%d(b)\n", zhouqi, day, chuqian, sum);
                continue;//下一天
            }
            chuqian *= zhouqi;//每1元变成zhouqi元
            //printf("%d\t%d\t%d\t%d(c)\n", zhouqi, day, chuqian, sum);
            if(chuqian>=p)//通货膨胀
                chuqian %= p;
            sum += chuqian;//每天取出
            //printf("%d\t%d\t%d\t%d\n", zhouqi, day, chuqian, sum);
        }
    }
    printf("%d", sum);
    return 0;
}
