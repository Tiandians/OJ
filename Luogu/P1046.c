#include <stdio.h>
#define CHAIR 30
int main(void)
{
    int ha[10], ht, apple = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &ha[i]);
    scanf("%d", &ht);
    for (int i = 0; i < 10; i++)
        if (ha[i] <= ht + CHAIR)
            apple++;
    ;
    printf("%d", apple);
    return 0;
}