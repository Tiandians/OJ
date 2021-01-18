#include <stdio.h>
#include <ctype.h>
int find(char ch);
int main(void)
{
    char ch;
    int pp;
    while ((ch = getchar()) != EOF)
    {
        pp = find(ch);
        printf("%c %s a char.", ch, (pp == -1) ? "is not" : "is");
        if(pp != -1)
            printf("It is located in %d", pp);
        putchar('\n');
    }
    return 0;
}

int find(char ch)
{
    if(isupper(ch))
        return ch - 'A';
    else if(islower(ch))
        return ch - 'a';
    else
        return -1;
}