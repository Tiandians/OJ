#include <stdio.h>
#include <string.h>
int main(void)
{
    char huixin[7],duiwu[7];
    scanf("%s%s", huixin, duiwu);//读字符
    int h = strlen(huixin), d = strlen(duiwu);//记字数
    int sumh = 1, sumd = 1;
    for (int i = 0; i <= h - 1;i++)//累乘
        sumh *= huixin[i] - 64;
    int modh = sumh % 47;
    for (int i = 0; i <= d - 1;i++)
        sumd *= duiwu[i] - 64;
    int modd = sumd % 47;
    if(modh==modd)
        printf("GO");
    else
        printf("STAY");
    return 0;
}