#include<stdio.h>
int main(void){
    int i,num;
    double count1,count2,count=0;
    int temp = 1;
    count1 = 0;
    count2 = 0;
    printf("请输入一个整数：");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        count1 +=1.0/i;

        count2 +=1.0/i*temp;
        temp*=-1;
        count+=count1+count2;
    }
    printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+... %d = %f\n",num,count1);
    printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0+... %d = %f\n",num,count2);
    printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+ ... %d + 1.0-1.0/2.0+1.0/3.0-1.0/4.0+... %d = %f\n",num,num,count);
    printf("%f", count1 + count2);
    return 0;
}