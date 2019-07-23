#include <stdio.h>
int num[105];

void sele(int x) //本选择排序从数组元素num[1]开始
{
    int wall = 0;
    for (int i = 1; i < x; i++) //排序，需要x-1轮
    {
        int *min = &num[wall+1];              //指针min:指向墙前第一个元素，寻找最小值
        for (int j = wall + 1; j <= x; j++) //区间内寻找最小值，找到num[x]为止
        {
            if (num[j] < *min) //如果num[j]的值小于min指向的值
                min = &num[j]; //min指向num[j];
        }
        int temp = num[wall + 1]; //经典三变量交换法
        num[wall + 1] = *min;
        *min = temp;
        wall++; //本轮排序完成，墙移动
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int count = 0;//从第一个元素开始读入
    for (int i = 1; i <= n; i++) //外层循环，每次循环读入一个数
    {
        int temp;
        scanf("%d", &temp);
        _Bool flag = 1;                 //没有重复的
        for (int j = 1; j <= count; j++) //遍历之前的元素
            if (num[j] == temp)
                flag = 0;
        if (flag)
            num[++count] = temp;
    }

    printf("%d\n", count);
    sele(count);
    for (int i = 1; i <= count;i++)
        printf("%d ", num[i]);

    return 0;
}