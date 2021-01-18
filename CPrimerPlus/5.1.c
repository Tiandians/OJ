#include <stdio.h>
int main(void)
{
    const int TIME = 60;
    int min;
    printf("Please enter some minutes:");
    while(scanf("%d", &min)==1 && min >0)
    {
        if(min >=TIME)
        {
            if(min % TIME ==0)
            {
                printf("%dh\n", min / TIME);
            }
            else
            {
                int hour = min / TIME;
                printf("%dh%dm\n", hour, min%TIME);
            }
        }
        else
            printf("%dm\n", min);

    }
}