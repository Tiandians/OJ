#include <stdio.h>
#include <string.h>

int zone[100][100];

int main(void)
{
    freopen("testdata.in", "r", stdin);
    freopen("testdata.out", "w", stdout);
    memset(zone, 0, sizeof(zone));

    int zs, x, y;
    scanf("%d", &zs);

    for (int i = 1; i <= zs; i++)
    {
        int a, b, g, k;
        scanf("%d%d%d%d", &a, &b, &g, &k);
        for (int a1 = a; a1 <= a + g; a++){
            for (int b1 = b; b1 <= b + k;b++){
                zone[a1][b1] = i;
            }
        }
    }

    scanf("%d%d", &x, &y);
    printf("%d", zone[x][y]);

    return 0;
}