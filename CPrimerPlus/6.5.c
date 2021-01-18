#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char x;
    while (scanf("%c", &x) == 1)
        for (char a = 'A'; a <= x; a++)
        {
            for (char b = a; b <= x - 1; b++)
                putchar(' ');
            for (char c = 'A'; c <= a; c++)
                putchar(c);
            for (char d = a - 1; d >= 'A'; d--)
                putchar(d);
            putchar('\n');
        }
    return 0;
}
