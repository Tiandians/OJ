//year
#include <stdio.h>
int main(void)
{
    int year;
    scanf("%d", &year);
    if(year % 4 == 0)
        printf("yes");
    else if (year % 1000 == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}