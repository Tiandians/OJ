#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);
    _Bool flag = 1;
    
    for (int a1 = 1; a1 <= 2; a1++)
        for (int a2 = 0; a2 <= 9; a2++)
            for (int a3 = 0; a3 <= 9; a3++)
                for (int a4 = 0; a4 <= 9; a4++)
                    for (int a5 = 0; a5 <= 9; a5++)
                        if ((a1 * 100 + a2 * 10 + a3) % k == 0 && (a2 * 100 + a3 * 10 + a4) % k == 0 && (a3 * 100 + a4 * 10 + a5) % k == 0)
                        {
                            printf("%d\n", a1 * 10000 + a2 * 1000 + a3 * 100 + a4 * 10 + a5);
                            flag = 0;
                        }
    if (300 % k == 0 && 0 % k == 0)
    {
        printf("%d\n", 30000);
        flag = 0;
    }
    if (flag)
        printf("No");

    return 0;
}