#include <stdio.h>

int main(void)
{
        unsigned int num;
        int flag = (scanf("-%u", &num));
        char c = getchar();
        printf("f=%d, num=%u, c=%c", flag, num, c);
        return 0;
}