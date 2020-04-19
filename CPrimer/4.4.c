#include <stdio.h>
int main(void)
{
    float height;
    char name[10];
    printf("Please enter your height and name.\n");

    scanf("%10s%f", name, &height);
    printf("%s, you are %.3f feet tall.\n", name, height);
    return 0;
}