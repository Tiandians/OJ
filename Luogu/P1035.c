#include<stdio.h>
int main(void)
{
    double sn = 0;
    int k, n=0;
    scanf("%d", &k);
    while(sn<=k){
        n++;
        sn += 1.0 / (double)n;

    }
    printf("%d", n);
    return 0;
}