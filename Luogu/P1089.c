#include <stdio.h>
int main(void)
{
    int total = 0;
    int budget, left;
    int mama = 0;
    _Bool flag = 1;
    for (int month = 1; month <= 12; month++)
    {
        total += 300;
        scanf("%d", &budget);
        left = total - budget;
        if(budget > total){
            printf("-%d", month);
            flag = 0;
            break;
        }
        else {
            total = left % 100;
            mama += left / 100;
        }
        //第二种写法：
        //删去flag相关,在for循环中打印最后的值
        //if(month == 12){               当年终且没有死亡（break）时
        //    total += mama * 120;        执行flag的分支
        //    printf("%d", total);
        //}
    }
    if(flag){
        total += mama * 120;
        printf("%d", total);
    }
    return 0;
}