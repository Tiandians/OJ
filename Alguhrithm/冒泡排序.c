#include <stdio.h>

void mp(int pre, int cur);
int main(void)
{
    int n;
    scanf("%d", &n);
    n--;
    int wait[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &wait[i]);
    }

    for (int i = 0; i <= n - 1; i++)
    {
        int pre = i;
        int cur = i+1;
        mp(pre, cur, wait[n]);
        
    }
}

void mp(int pre, int cur,int wait[])
{
    if(wait[pre] > wait[cur])
    {
        wait[pre] += wait[cur];
        wait[cur] = wait[pre] - wait[cur];
        wait[pre] -= wait[cur];
    }
}