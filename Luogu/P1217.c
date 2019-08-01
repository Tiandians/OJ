#include<stdio.h>
#include<stdbool.h>

bool is_primer(int x)
{
    for (int i = 2; i * i <= x;i++)
        if(x%i==0)
            return false;
    return true;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    
}