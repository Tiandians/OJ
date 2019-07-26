#include <stdio.h>

int main(void)
{
    char hello[13] = "Hello World!";
    for (int i = 0; i < 12; i++)
    {
        if(hello[i]!= getchar()){
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}