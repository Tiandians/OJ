#include<stdio.h>
int main(void)
{
    int a, b;
    int check = 2;//获取scanf返回值
    int count = 0;//计算星期
    int x = 0;//用于终止循环
    while (2 == check && 0 == x)//获取小时，判断是否已经不高兴
    {
        count++;//星期递增
        check = scanf("%d %d", &a, &b);
        if(a + b >= 8){
            printf("%d", count);
            x++;//已经不高兴了
        }
        
    }
    return 0;
}
