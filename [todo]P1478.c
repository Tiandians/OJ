#include<stdio.h>
int apple[5005];

void sele(int x) //本选择排序从数组元素apple[1]开始
{
    int wall = 0;
    for (int i = 1; i < x; i++) //排序，需要x-1轮
    {
        int *min = &apple[wall+1];              //指针min:指向墙前第一个元素，寻找最小值
        for (int j = wall + 1; j <= x; j++) //区间内寻找最小值，找到apple[x]为止
        {
            if (apple[j] < *min) //如果apple[j]的值小于min指向的值
                min = &apple[j]; //min指向apple[j];
        }
        int temp = apple[wall + 1]; //经典三变量交换法
        apple[wall + 1] = *min;
        *min = temp;
        wall++; //本轮排序完成，墙移动
    }
}

int main(void)
{
    freopen("testdata.in", "r", stdin);
    freopen("testdata.out", "w", stdout);
    int n, s, a, b;
    int apples = 0;
    int count = 0;
    scanf("%d%d", &n, &s);
    scanf("%d%d", &a, &b);
    int c = a + b;
    for (int i = 1; i <= n;i++)
    {
        int xi, yi;
        scanf("%d%d", &xi, &yi);
        if(xi<=c)//可以摘到
        {   
            if(yi==0)//不需要力气
                apples++;
            else
                apple[++count] = yi;
        }
    }
    sele(count);//排序
    for (int i = 1; i <= count;i++)
    {
        if((s-apple[i])>=0){
            s -= apple[i];
            apples++;
        }
        else
            break;
    }
    printf("%d", apples);
    return 0;
}