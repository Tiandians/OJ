#include <ctype.h>
#include <stdio.h>
int main(void)
{
    freopen("testdata.in", "r", stdin);
    freopen("testdata.out", "w", stdout);
    for (char a = 'F';a>='A';a--)
    {
        for (char f = 'F'; f >= a; f--)
            putchar(f);
        putchar('\n');
    }
    return 0;
}