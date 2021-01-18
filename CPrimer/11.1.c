#include <stdio.h>
#define MAX 40
char *nget(int n);

int main(void)
{
    printf("Please enter less than %d words.\n", );
    char *ptr;
    ptr = nget(MAX);
    printf("%s", ptr);
    return 0;
}

char *nget(int n)
{
    static char get[MAX + 1];
    char temp;
    while (temp = getchar() != '\n')
        get[i++] = temp;
    return get;
}