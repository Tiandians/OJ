#include <stdio.h>
int main(void)
{
    double sec = 3.15e7;
    int year;

    printf("year____\b\b\b\b");
    scanf("%d", &year);
    printf("%d  %e", year, sec);
    printf("\nis%e", year * sec);

    return 0;
}