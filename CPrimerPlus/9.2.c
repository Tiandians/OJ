#include <stdio.h>
#include <ctype.h>
void chline(char ch, int i, int j);
int main(void)
{
    char ch;
    int i, j;
    scanf("%c%d%d", &ch, &i, &j);
    chline(ch, i, j);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int n = 1; n <= j; n++)
    {
        for (int m = 1; m <= i; m++)
            putchar(ch);
        putchar('\n');
    }
}