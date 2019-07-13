#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[12], words[12];
    scanf("%s", word);                          //读单词
    for (int i = 0; i <= strlen(word) - 1; i++) //转小写
    {
        if (isupper(word[i]))
            word[i] = tolower(word[i]);
    }
    int local, count = 0, w = 0;
    _Bool first = 1; //是否出现

    while (scanf("%s", words) == 1) //读文章
    {
        for (int i = 0; i <= strlen(words) - 1; i++) //转小写
        {
            if (isupper(words[i]))
                words[i] = tolower(words[i]);
        }
        if (strcmp(word, words) == 0) //判断
        {
            if (first) //是第一次出现
            {
                local = w; //记录位置
                count++;   //次数递增
                first = 0; //标记变换
            }
            else
                count++; //次数递增
        }
        w++;                   //词数递增
        if (getchar() == '\n') //结束输入
            break;
    }

    if (first) //不在
        printf("-1\n");
    else //在
        printf("%d %d\n", count, local);
    return 0;
}