#include <math.h>
#include <stdio.h>
int main(void)
{
    int a = 1, b, c;
    for (; a <= 9; a++)
    {
        //printf("round1\n");
        if (a == 1)
            b = 1;
        for (; b <= 9; b++)
        {
            //printf("round2\n");
            if(b == 1) 
                c = 1;
            for (; c <= 9; c++)
            {
                //printf("round3\n");
                if (a * a * a + b * b * b + c * c * c >= 100 && a * a * a + b * b * b + c * c * c < 1000)
                    printf("%d\n", a * a * a + b * b * b + c * c * c);
            }
        }
    }
    return 0;
}