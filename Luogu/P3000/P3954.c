#include <stdio.h>

int main(void)
{
    int zuoye, xiaoce, kaoshi;
    scanf("%d%d%d", &zuoye, &xiaoce, &kaoshi);
    int chengji = zuoye / 10 * 2 + xiaoce / 10 * 3 + kaoshi / 2;
    printf("%d", chengji);
    return 0;
}