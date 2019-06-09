#include<stdio.h>
#define X1 0.4463
#define X2 0.4663
#define X3 0.5663 
int main(void)
{
    int kwh;
    scanf("%d", &kwh);
    if(kwh <= 150)
        printf("%.1f", kwh * X1);
    else if(kwh <401){
        int que = kwh - 150;
        printf("%.1f", 150 * X1 + que * X2);
    }
    else{
        int que2 = kwh - 400;
        printf("%.1f", 150 * X1 + 250 * X2 + que2 * X3);
    }
        
    return 0;
}