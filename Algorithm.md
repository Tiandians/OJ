# 算法笔记

## 排序

### 一、选择排序

步骤：

1. 用墙把数字列表分为两个子列表
2. 求未排序子序列中最小元素
3. 把它和未排序子列表中的第一个元素交换
4. 墙向前移动一个元素

事项：

* 每次移动就完成了一轮排序
* 对n个元素的列表排序需要n-1轮

实现：

```c
int num[MAXN];

void sele(int x) //本选择排序从数组元素num[1]开始
{
    int wall = 0;
    for (int i = 1; i < x; i++) //排序，需要x-1轮
    {
        int *min = &num[wall+1];//指针min:指向墙前第一个元素，寻找最小值
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
```

这个函数使用了指针来对数组元素进行交换

### 二、冒泡排序

步骤：

1. 