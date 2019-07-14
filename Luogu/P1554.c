#include <stdio.h>//最开始使用了switch分解计数，代码很长
#include <string.h>//后来发现可以使用数组计数，更方便

int number[10];

void iscount(int k)
{
    if (k < 10)
    {
        number[k]++;
    }
    else
    {
        iscount(k % 10);
        k /= 10;
        iscount(k);
    }
}
int main(void)
{
    memset(number, 0, sizeof(number));
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++)
        iscount(i);

    for (int i = 0; i <= 9; i++)
    {
        if (i != 9)
            printf("%d ", number[i]);
        else
            printf("%d", number[i]);
    }
    return 0;
}