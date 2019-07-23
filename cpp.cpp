#include <cstdio>
#include <iostream>
using namespace std;
int a[10005];
#define push(x) a[++tot] = x
#define pop tot--
#define top a[tot]
#define num tot
int main(void)
{
    int tot = 1;
    push(2);
    push(3);
    pop;
    cout << a[2];
    return 0;
}