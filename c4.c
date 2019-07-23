#include <stdio.h>
int num[105] = {0, 23, 78, 45, 8, 32, 56};

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
    sele(6);
    for (int i = 1; i <= 6; i++)
        printf("%d ", num[i]);
    return 0;
}