#include<stdio.h>
int main(void)
{
    int lengthe, m;
    scanf("%d %d", &lengthe, &m);
    int length = lengthe + 1;//添加零点
    
    int trees[length];//路的长度
    for (int i = 0; i <= lengthe; i++){//种树了
        trees[i] = 1;
    }
    for (int i = 1; i <= m; i++)//获取输入
    {
        int begin, end;
        scanf("%d %d", &begin, &end);

        for (int j = begin; j <= end; j++){//砍树
            trees[j] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i <= lengthe; i++){//统计剩余的数
        if(trees[i])
            count++;
    }
    printf("%d", count);
    return 0;
}