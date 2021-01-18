#include <stdio.h>
#define VOLU 100
char string[VOLU];

int main(void)
{
    int count = 0;
    char temp;
    while ((temp = getchar()) != '#')
    {
        string[count] = temp;
        count++;
    }

    for (int i = 0; i <= count; i++)
    {
        if (i % 8 == 0 && i != 0)
            putchar('\n');
        printf("%c-%3d ", string[i], string[i]);
    }
    return 0;
}