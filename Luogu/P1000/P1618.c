#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_all(int a, int b, int c)
{
    if (a > 999 || b > 999 || c > 999) //先确认数位，可以减少非三位数所用时间
        return 0;
    if (a < 100 || b < 100 || c < 100)
        return 0;
    char s[9];
    int num[10]; //用数组来计数
    memset(num, 0, sizeof(num));
    sprintf(s, "%d%d%d", a, b, c); //通过打印到字符串便于逐字查找
    for (int i = 0; i < 9; i++)
    {
        num[s[i] - '0']++;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (num[i] != 1)
            return false; //直接return，不需要再声明bool
    }
    return true;
}

int main(void)
{
    bool flag = true;
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 1; i < 1000; i++)
    {
        int j = i * b / a, k = i * c / a; //按比例枚举数
        if (is_all(i, j, k))
        {
            printf("%d %d %d\n", i, j, k);
            flag = false;
        }
    }
    if (flag)
        printf("No!!!");
    return 0;
}