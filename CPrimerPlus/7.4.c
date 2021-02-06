#include <stdio.h>

int main(void)
{
    char cur;
    int count = 0;
    while ((cur = getchar()) != '#')
    {
        if (cur == '.')
        {
            putchar('!');
            count++;
        }
        else if (cur == '!')
        {
            putchar('!');
            putchar('!');
            count++;
        }
        else
            putchar(cur);
    }
    printf("\n%d", count);
    return 0;
}