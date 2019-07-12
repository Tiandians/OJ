#include <math.h>
#include <stdio.h>
_Bool is_daffodil(int wait)
{
    int a = wait / 100;
    int b = wait / 10 % 10;
    int c = wait % 10;
    if(a*a*a+b*b*b+c*c*c==wait)
        return 1;
    else
        return 0;
}
int main(void)
{
    for (int count = 100; count <= 999; count ++)
    {
        if(is_daffodil(count))
            printf("%d\n", count);
    }
    return 0;
}

