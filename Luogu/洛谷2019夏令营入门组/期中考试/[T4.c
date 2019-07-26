#include<stdio.h>
#include<stdbool.h>

int h[105];
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &h[i]);
    }
    for (int i = 0; i < n;i++)
    {
        putchar(h[i - 1]);
        if(i==0)
        {
            if(h[i]){
                putchar('1');
                continue;
            }
            else{
                putchar('0');
                continue;
            }
        }
        if(h[i])
            putchar(h[i - 1] ? '1' : '0');
        else
            putchar(h[i - 1] ? '0' : '1');
    }
    return 0;
}