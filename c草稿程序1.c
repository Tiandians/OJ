#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAXN 5
int queue[MAXN], frt=0,end=0;
#define push(x) queue[++end%MAXN]=x
#define pop frt=(frt+1)%MAXN
#define front queue[frt]
#define size abs(end-frt+1)+1

void prin(void)
{
        for (int i = frt;i!=(end%MAXN);i=(i+1)%MAXN)
                printf("%d ", queue[i]);
        putchar('\n');
}
int main(void)
{
        push(1);
        prin();
        push(2);
        prin();
        push(3);
        prin();
        push(4);
        prin();
        push(5);
        prin();
        pop;
        prin();
        push(6);
        prin();
        pop;
        prin();
        push(7);
        prin();
        push(7);
 
        return 0;
}
