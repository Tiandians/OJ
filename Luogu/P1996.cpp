#include <cstdio>
#include <queue>
using namespace std;
int main(void)
{
    queue <int> s;
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n;i++)
        s.push(i);
        while(!s.empty())
        {
            for (int i = 1; i < m;i++)
            {
                s.push(s.front());
                s.pop();
            }
            printf("%d ", s.front());
            s.pop();
        }
    return 0;
}
