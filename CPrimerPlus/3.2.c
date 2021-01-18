#include<stdio.h>
int main(void)
{
    int asc;

    printf("Please enter a word _____\b\b\b\b\b");
    scanf("%d", &asc);
    printf("You have entered a %c", asc);

    getchar();
    return 0;
}