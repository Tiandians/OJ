#include <stdio.h>

int pp(int n, int d, int k)
{
    int sum = n; //把烟吸光；这一次吸了sum根
    d += n;       //变成烟蒂
    if (d < k)    //换不了烟了
        return n; //吸掉
    n = d / k;    //换成新烟
    d %= k;       //剩下烟蒂
    return sum + pp(n, d, k); //sum根+之后的
}

int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", pp(n, 0,k));
    return 0;
}