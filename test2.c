#include <stdio.h>

int jisuan(int qimo, int banji, char ganbu, char xibu, int lunwen)
{
    int cur = 0;
    if (qimo > 80 && lunwen >= 1)
        cur += 8000;
    if (qimo > 85 && banji > 80)
        cur += 4000;
    if (qimo > 90)
        cur += 2000;
    if (qimo > 85 && xibu == 'Y')
        cur += 1000;
    if (banji > 80 && ganbu == 'Y')
        cur += 850;
    return cur;
}
int main(void)
{
    
    
    printf("%d", jisuan(87,82,'Y','N',0));
    return 0;
}