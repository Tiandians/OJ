#include <stdio.h>
int main(void)
{
    float pr;

    printf("Enter a floating-point value:______\b\b\b\b\b\b");
    scanf("%f", &pr);
    printf("\nfixed-point notation: %f\n", pr);
    printf("exponential notaion: %e\n", pr);
    printf("p notation: %a", pr);

    return 0;
}