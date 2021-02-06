#include <ctype.h>
#include <stdio.h>
int main(void)
{
    int limit = 1;
    for (char a = 'A';a<'U';limit++)
    {
        for (int count = 1; count <= limit; count++, a++)
        {
            putchar(a);
        }
        putchar('\n');
    }
    return 0;
}