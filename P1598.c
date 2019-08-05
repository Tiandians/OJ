#include <ctype.h>
#include <math.h>
#include <stdbool.h>
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
        int maxc = 0;
        for (int i = 0; i < 26; i++) //寻找最大数
        {
                if (alp[i] > maxc)
                        maxc = alp[i];
        }
        char s[maxc + 6][56]; //版面初始化，边界：x=maxc, y=50
        for (int x = 0; x <= maxc; x++)
        {
                for (int y = 0; y <= 50; y++)
                        s[x][y] = ' ';
        }
        for (int y = 0; y <= 50; y += 2)//制图
        {
                for (int x = maxc - 1, ct = 1; ct <= alp[y]; x--, ct++)
                        s[x][y] = '*';
                s[maxc][y] = 'A' + y / 2;
        }
        /*
        8 0 maxc-maxc ctmaxc
        8 1 maxc-3 ct3
        8 2 maxc-2 ct2
        8 3 maxc-1 ct1
        8 maxc maxc=4 [5]*/
        for (int x = 0; x < maxc; x++)
        {
                for (int y = (50);; y--)
                {
                        if (s[x][y] == ' ')
                                s[x][y] = 0;
                        else
                                break;
                }
        }
        for (int x = 0; x <= maxc; x++)
        {
                for (int y = 0; y <= 50; y++)
                        if (s[x][y] != 0)
                                putchar(s[x][y]);
                putchar('\n');
        }

        return 0;
}