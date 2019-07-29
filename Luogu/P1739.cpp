#include <cstdio>
#include <stack>
using namespace std;
int main(void)
{
    stack<char> s;
    char temp;
    while ((temp = getchar()) != '@')
    {
        if (temp == '(') //左括号入栈
            s.push(temp);
        else if (temp == ')') //右括号检查并出栈
        {
            if (s.top() == '(')
                s.pop();
            else
            {
                printf("NO");
                goto GG;
            }
        }
    }
    if (s.empty())
        printf("YES");
    else
    {
        printf("NO");
    }
GG:
    return 0;
}