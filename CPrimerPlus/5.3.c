#include <stdio.h>
#define DTOW 7
int main(void)
{
    int days, weeks;
    printf("Please enter days and weeks.\n");
    while (scanf("%d", &days) == 1 && days > 0)
    {
        weeks = days / DTOW;
        if (days % DTOW == 0)
            printf("%d days are %d %s.\n", days, weeks, weeks == 1 ? "week" : "weeks");
        else if (days > 7)
            printf("%d days are %d %s, %d %s.\n", days, weeks, weeks == 1 ? "week" : "weeks",
                   days % DTOW, days % DTOW == 1 ? "day" : "days");
        else
            printf("%d %s %d %s.\n", days, days == 1 ? "day is" : "days are", days, days == 1 ? "day" : "days");
    }
    printf("Bye.\n");
    return 0;
}