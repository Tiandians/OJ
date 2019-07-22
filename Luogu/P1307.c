#include<stdio.h>
#include<string.h>
char s[12];
int main(void)
{
    scanf("%s", s);
    int tot = strlen(s) - 1;
    for (; s[tot]=='0';tot--)
        ;
    _Bool flag = 1;//第0个字符不是负号
    for (; tot > 0;tot--)
    {
        if(s[0]=='-'&&flag){//注意flag，否则每次循环都会打印
            putchar('-');
        flag = 0;//第0个字符是负号
        }
        putchar(s[tot]);
    }
    if(flag)
        putchar(s[0]);
    return 0;
}