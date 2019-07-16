#include <stdbool.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    int count = 0;
    char pre=' ', cur;
    while((cur= getchar())&&cur!='#')
    {
        if(pre =='e'&&cur=='i')
        {
            count++;
        }
        pre = cur;
    }
    printf("%d", count);
    return 0;
}