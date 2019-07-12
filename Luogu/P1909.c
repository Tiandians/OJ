#include <stdio.h>
int main(void)
{
    int price, pencil, n, box, total, status;
    scanf("%d", &n);
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d %d", &pencil, &price);
        box = n / pencil;
        printf("box = %d\n", box);
        if(box * pencil != n)
            box++;
        printf("box = %d\n", box);
        status = box * price;
        if(i == 1)
            total = status;
        else if(status < total)
            total = status;
        printf("total = %d\n", total);
    }
    printf("%d", total);
    return 0;
}