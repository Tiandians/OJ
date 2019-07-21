#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char isbn[14];//字符串
    int isbnum[9];//数组
    int sum = 0;//和
    int snum, worknum;

    scanf("%s", isbn);//读字符串

    for (int i = 0, m=0; i <= 10;i++)//取数
    {
        if(isdigit(isbn[i])){
            isbnum[m] = isbn[i] - 48;//数字转整数
            m++;
        }
    }

    if(isdigit(isbn[12]))//取识别码
        snum = isbn[12] - 48;//数字转整数
    else
        snum = 10;//X识别码设为10

    for (int i = 0; i <= 8; i++)//算和
        sum += isbnum[i] * (i + 1);

    worknum = sum % 11;//算验证码

    if(worknum == snum)//判断
        printf("Right");
    else
    {
        if(worknum == 10)
        {
            isbn[12] = 'X';//直接改字符串
            printf("%s", isbn);
        }
        else
        {
            isbn[12] = worknum + 48;//改字符串
            printf("%s", isbn);
        }
    }

    return 0;
}