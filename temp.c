#include <stdio.h>

int main(void)
{
    int count[4] = {[3]=4};
    ++count[3];
    printf("%d", count[3]);
    return 0;
}