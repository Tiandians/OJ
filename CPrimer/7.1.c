#include <stdio.h>

int main(void)
{
    int kg = 0, hh = 0, cha = 0;
    char cur;
    while((cur = getchar())!='#')
    {
        switch(cur)
        {
            case ' ':
                kg++;
                break;
            case '\n':
                hh++;
                break;
            default:
                cha++;
        }
    }
    printf("\' \'is %d, \\n is %d and chars are %d\n", kg, hh, cha);
    return 0;
}