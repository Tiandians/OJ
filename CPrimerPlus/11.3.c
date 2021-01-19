#include <stdio.h>
#include <ctype.h>
#define MAX 100
void chtg(char getto[]);

int main(void)
{
    char chr[MAX];
    printf("Please enter some words and I will read the first one.\n");
    chtg(chr);
    puts(chr);
    return 0;
}

void chtg(char getto[])
{
    char temp;
    int i = 0;
    while(isblank(temp=getchar()))//循环跳过空格
        ;
    while((getto[i++]=temp)&&(!isblank(temp=getchar())))//循环：赋值、读取
        ;
    getto[i] = '\0';
    while(getchar()!='\n')
        ;
}