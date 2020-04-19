#include <stdio.h>

int main(void)
{
    int hz, mz;
    long sz;
    scanf("%d:%d:%ld", &hz, &mz, &sz);
    sz += mz * 60 + hz * 3600;
    int hs, ms;
    long ss;
    scanf("%d:%d:%ld", &hs, &ms, &ss);
    ss += ms * 60 + hs * 3600;
    int book;
    scanf("%d", &book);
    printf("%ld", (ss - sz) * book);
    return 0;
}