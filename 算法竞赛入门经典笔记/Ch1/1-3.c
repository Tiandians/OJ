//Sum
#include <stdio.h>
int main(void)
{
    int n, count = 0, sum= 0;
    scanf("%d", &n);
    while(++count <= n){
        sum = count + sum;
    }
    printf("%d", sum);
    return 0;
}