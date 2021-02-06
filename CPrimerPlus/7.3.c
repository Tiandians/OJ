#include <stdio.h>

int main(void)
{
    int so = 0, se = 0, oe = 0, oc = 0;
    int cur;
    while (scanf("%d", &cur) == 1)
    {
        if (cur == 0)
            continue;
        if (cur % 2 == 0)
        {
            so += cur;
            oc++;
        }
        else
        {
            se += cur;
            oe++;
        }
    }
    printf("odd: sum :%d, pr %d\n", so, so / oc);
    printf("even :sum:%d, pr %d", se, se / oe);
    
    return 0;
}