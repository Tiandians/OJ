//栈-十进制转二进制倒序打印
#include <stdio.h>

int s[10005],tot = 0;//当前指向栈底
#define push(x) s[++tot] = x
#define pop tot--
#define size tot
#define top s[tot]

int main(void)
{
    int num;
    scanf("%d", &num);
    while(num!=0)
    {
        int reminder = num % 2;
        push(reminder);
        num /= 2;
    }
    while(size)
    {
        printf("%d", s[pop]);
    }
    return 0;
}