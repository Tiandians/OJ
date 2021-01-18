/* newguess.c -- an inefficient but improved number-guesser */
#include <stdio.h>
int main(void)
{
    int guess = 50;
    int gbot = 1;
    int gtop = 100;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan b if it is bigger and s if it is smaller.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y') /* get response */
    {
        switch (response)
        {
        case 'b':
        {
            gtop = guess;
            guess = (gtop + gbot) / 2;
            printf("Well, then, is it %d?\n", guess);
            break;
        }
        case 's':
        {
            gbot = guess;
            guess = (gtop + gbot) / 2;
            printf("Well, then, is it %d?\n", guess);
            break;
        }
        default:
            printf("Sorry, I understand only y, s or b.\n");
        }
        while (getchar() != '\n')
            continue; /* skip rest of input line */
    }
    printf("I knew I could do it!\n");

    return 0;
}
