#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Please enter an upper:");
    char ch;
    while(!isupper(ch = getchar()))
        printf("Error!\nPlease enter again!\na");
    for (char line = 'A'; line <= ch; line++)
    {
        for (char pause = line; pause < ch; pause++)
            printf(" ");
        for (char up = 'A'; up <= line; up ++)
            printf("%c", up);
        for (char down = line - 1; down >= 'A'; down--)
            printf("%c", down);
        printf("\n");

    }

        return 0;
}