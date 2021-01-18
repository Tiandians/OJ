#include <stdio.h>
#define MAX 40
char *nget(int n);

int main(void)
{
    //printf("Please enter less than %d words.\n", MAX);
    char *ptr;
    ptr = nget(MAX);
    printf("%s", ptr);
    return 0;
}

char *nget(int n)
{
    static char get[MAX + 1]="hagnag";
    char temp=0;
    int i = 0;
    while ((temp = getchar()) != '\n')
        get[i++] = temp;
    get[i + 1] = '\0';
    return get;
}
