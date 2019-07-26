#include<stdio.h>

int main(void)
{
    int n, a, d;
    scanf("%d%d%d", &n, &a, &d);
    int cnt = n * a / d;
    if(cnt%2==0)
        printf("hou");
    else
        printf("xian");
    return 0;
}