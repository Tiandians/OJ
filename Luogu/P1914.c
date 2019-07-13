#include <stdio.h>
#include <string.h>
int main(void)
{
    char words[55];
    int word[55];

    int key;
    scanf("%d", &key);
    scanf("%s", words);

    for (int i = 0; i <= strlen(words) - 1; i++)
    {
        word[i] = words[i];
    }

    for (int i = 0; i <= strlen(words) - 1; i++)
    {
        word[i] += key;
        if (word[i] > 122)
        {
            int cha = word[i] - 122;
            word[i] = 96 + cha;
        }
    }

    for (int i = 0; i <= strlen(words) - 1;i++)
    {
        words[i] = word[i];
    }

    printf("%s", words);

    return 0;
}