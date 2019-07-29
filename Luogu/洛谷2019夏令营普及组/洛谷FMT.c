#include<stdio.h>
#define MAXN 105
int s[MAXN];
int main(void)
{
    freopen("testdata.in", "r", stdin);
    freopen("testdata.out", "w", stdout);
    int a, b;
    while(1)
    {
        int n=scanf("%d-%d", &a, &b);
        if(n!=2)
            break;
        s[a] = b;//记录每个人右手边的人
    }
    printf("1-");
    for (int i = 1; s[i];i=s[i])//打印这个人，然后跳转至他右手边的人
    {
        printf("%d", s[i]);
        if(s[s[i]])
            putchar('-');
    }
    return 0;
}