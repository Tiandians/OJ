#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char temp;
    int count = 4, alp[26] = {0};
    while (count)
    {
        if ((temp = getchar()) == '\n')
            count--;
        else if (isupper(temp))
            alp[temp - 'A']++;
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", alp[i]);
    return 0;
}