#include <stdio.h>

int main(void)
{
    int count = 0;
    while(getchar()!=EOF)
        count++;
    printf("word count is %d", count);
    return 0;
}