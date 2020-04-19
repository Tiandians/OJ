#include <stdio.h>

char stack[105];
char stack2[210];
int tot = 0, tot2 = 0;

#define push(x) stack[++tot] = x
#define push2(x) stack2[++tot2] = x
#define pop tot--
#define pop2 tot2--
#define size tot
#define size2 tot2
#define top stack[tot]
#define top2 stack2[tot2]
#define empty tot
#define empty2 tot2

int count = 20;

int main(void)
{
    freopen("testdata.in", "r", stdin);
    char temp;
    while ((temp = getchar()) != EOF)//把所有括号push进栈
    {
        push(temp);
    }
    while (empty)//非空
    {
        putchar('1');
        if (top == ')') //验栈顶
        {
            push2(top);//转移到栈2
            pop;
            if (top == '(')//补全
            {
                push2(top);
                pop;
            }
            else{
                push2('(');
            }
        }
        else if (top == ']')
        {
            push2(top);
            pop;
            if(top=='[')
            {
                push2(top);
                pop;
            }
            else{
                push2('[');
            }                
        }
        else if(top=='(')
        {
            push2(')');
            push2(top);
            pop;
        }
        else if(top=='[')
        {
            push2(']');
            push2('[');
            pop;
        }
    }
    for (int i = size2; i >0;i--)
    {
        putchar(stack2[i]);
    }
        return 0;
}