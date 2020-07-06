#include <stdio.h>
void switc(char[], int[]);
int main(void)
{
    char input[4] = {'A', 'B', 'C', 'D'};
    //char answer[4];
    //printf("please enter the answer:");
    //for (int i = 0; i < 4;i++)
    //    answer[i] = getchar();
    //printf("please enter lunshu")
    //printf("y to switch and n to exit");
    //char con;
    //while ((con=getchar())=='y')
    for (int i = 1; i <= 3;i++)
    {
        int sw[4];
        for (int i = 0; i < 4;i++)
            sw[i] = getchar() - 48;
        switc(input, sw);
    }
    putchar('\n');
    for (int i = 0; i < 4; i++)
        putchar(input[i]);
    return 0;
}

void switc(char input[], int sw[])
{
    char output[4];
    for (int i = 0; i < 4; i++)
        output[i] = input[sw[i]-1];
    for (int i = 0; i < 4;i++)
        input[i] = output[i];
}