#include <stdio.h>
int findmax(int s[])
{
    int max = 0;
    int tot = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            tot = i;
        }
    }
    s[tot] = 0;
    return max;
}

int main(void)
{
    int a, b, c;
    int s[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &s[i]);
    c = findmax(s);
    b = findmax(s);
    a = findmax(s);
    char t[4];
    scanf("%s",t);
    for (int i = 0; i <= 2; i++)
    {
        switch (t[i])
        {
        case 'A':
            printf("%d ", a);
            break;
        case 'B':
            printf("%d ", b);
            break;
        case 'C':
            printf("%d ", c);
            break;
        }
    }
    return 0;
}