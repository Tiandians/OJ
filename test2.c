#include <stdio.h>
#include <stdbool.h>

long num[21];

bool susu(int x)
{
    for (int i = 1; i * i <= x;i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int cul(int n, int k)
{
    
}

int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%ld", &num[i]);
    }

        return 0;
}

