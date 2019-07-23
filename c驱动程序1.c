#include <stdio.h>
#define MAX(x, y) (x > y) ? x : y
#define max(a,b)            (((a) > (b)) ? (a) : (b))


int main(void)
{
    printf("%d %d", MAX(12, 11), max(12, 11));
    return 0;
}