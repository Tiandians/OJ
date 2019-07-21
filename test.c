#include <stdbool.h>
#include <stdio.h>

bool issusu(int x)
{
    bool flag = true;
    for (int i = 1; i * i <= x; i++)
        if (x % i == 0)
            flag = false;
    return flag;
}

int main(void)
{
    int susu[10000] = {[9999] = 0};
    for (int i = 9, count = 0; i <= 20000; i++)
    {
        if (issusu(i))
        {
            susu[count] = i;
            count++;
        }
    }
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= 9999; i++)
        for (int j = 0; j <= 9999; j++)
            for (int k = 0; k <= 9999; k++)
            {
                if (susu[i] + susu[j] + susu[k] == n)
                {
                    printf("%d %d %d", susu[i], susu[j], susu[k]);
                    goto help;
                }
            }
help:
    return 0;
}