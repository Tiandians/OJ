#include<stdio.h>
int main(void)
{
   int maxmod(const char *n, int mods)
{
    int len = strlen(n);
    int ans = 0;
    for (int i = 0; i < len;i++)
        ans = (int)((((long long)ans * 10) % mods + (n[i] - '0') % mods) % mods);
    return ans;
} 
    return 0;
}