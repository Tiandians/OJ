#include <ctype.h>
#include <stdio.h>
int main(void)
{
    for (char a = 'F';a>='A';a--)
    {
        for (char f = 'F'; f >= a; f--)
            putchar(f);
        putchar('\n');
    }
    return 0;
}