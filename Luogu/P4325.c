#include <string.h>
#include <stdio.h>

int modulo[42];

int main(void)
{
    memset(modulo, 0, sizeof(modulo));
    for (int i = 1; i <= 10;i++)
    {
        int number;
        scanf("%d", &number);
        int modu = number % 42;
        modulo[modu]++;
    }

    int count=0;
    for (int i = 0; i <= 41;i++)
    {
        if(modulo[i])
            count++;
    }
    printf("%d", count);
    return 0;
}