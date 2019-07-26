#include <cstdio>
#include <stack>
using namespace std;
int main(void)
{
    stack<int> num;
    while (1)
    {
        int nu;
        int flag = (scanf("%d", &nu)); //取数字
        //这个取数字环节出现了错误：scanf会读取+-号！这样+-操作就会被忽略，但同时scanf又会返回0，于是跳过了+-操作，甚至可能下一个损伤数字
        if (flag) //读取成功
        {
            num.push(nu); //入栈
            continue;
        }
        else //是字符
        {
            char c = getchar(); //读取
            if (c == '.')       //操作数结尾
                continue;
            else if (c == '@') //表达式结尾
                break;
            else
            {
                switch (c)
                {
                case '+':
                {
                    int a = num.top(); //栈顶出栈
                    num.pop();
                    int b = num.top(); //栈顶出栈
                    num.pop();
                    int c = a + b;
                    num.push(c); //相加入栈
                }
                break;
                case '-':
                {
                    int d = num.top();
                    num.pop();
                    int e = num.top();
                    num.pop();
                    int f = e - d;
                    num.push(f);
                }
                break;
                case '*':
                {
                    int g = num.top();
                    num.pop();
                    int h = num.top();
                    num.pop();
                    int i = g * h;
                    num.push(i);
                }
                break;
                case '/':
                {
                    int j = num.top();
                    num.pop();
                    int k = num.top();
                    num.pop();
                    int l = k / j;
                    num.push(l);
                }
                }
            }
        }
    }
    printf("%d", num.top());
    return 0;
}