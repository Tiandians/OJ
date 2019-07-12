#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    _Bool light[n + 1];
    light[0] = 1;
    int people;
    scanf("%d", &people);
    for (int human = 1; human <= people; human++)
    {
        if (human == 1)
        {
            for (int x = 1; x <= n; x++)
                light[x] = 1;
        }
        else
        {
            for (int x = human; x <= n; x += human)
            {
                light[x] = !light[x];
            }
        }
    }
    _Bool flag = 0;
    for (int count = 1; count <= n; count++)
    {
        if (light[count] && !flag)
        {
            printf("%d", count);
            flag = 1;
            continue;
        }
        if(light[count] && flag)
            printf(" %d", count);
    }
    return 0;
}