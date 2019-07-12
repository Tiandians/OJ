#include <stdio.h>
int main(void)
{
    int year, day;
    year = 13;
    day = 365 * year;

    printf("I'm %d years and %d days", year, day);

    return 0;
}