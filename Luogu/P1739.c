#include <stdio.h>

char stack[230];
int tot = 0;

#define push(x) stack[++tot] = x
#define pop tot--
#define size tot
#define top stack[tot]
#define empty tot

int main(void)
{
    char temp;
    while ((temp = getchar()) != '@')
    {
        if (temp == '(')
        {
            push(temp);
        }
        else if (temp == ')')
        {
            if ((tot) && top == '(')
                pop;
            else
            {
                printf("NO");
                goto GG;
            }
        }
    }
    if(tot)
        printf("NO");
    else
        puts("YES");
GG:;
    return 0;
}