#include <stdio.h>
#define C 12.01
#define H 1.008
#define O 16.00
#define N 14.01

double is_y(char c)
{
    if (c == 'C')
        return C;
    if (c == 'H')
        return H;
    if (c == 'O')
        return O;
    if (c == 'N')
        return N;
    return 0;
}

int main(void)
{
    char y;
    int n;
    double sum = 0.0;
    
    while (1)
    {
        y = getchar();
        
    }
    printf("%lf", sum);
    return 0;
}