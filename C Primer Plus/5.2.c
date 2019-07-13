#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    for (int i = x; i <= x + 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
    
}