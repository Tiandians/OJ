#include <stdio.h>

int main(void)
{
    char c;
    int count = 0;
    while((c=getchar())!='\n'){
        if(c==' ')
            continue;
        count++;
    }
    printf("%d", count);
    return 0;
}