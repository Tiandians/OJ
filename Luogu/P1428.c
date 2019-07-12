#include <stdio.h>



int main(void)
{
    int fish;
    scanf("%d", &fish);
    int kawayi[fish];
    for (int i = 0; i <= fish - 1; i++)
    {
        int kaway;
        scanf("%d", &kaway);
        kawayi[i] = kaway;
    }

    for (int i = 0; i <= fish - 1; i++)//开始检验
    {
        int fishs = 0;//不如自己可爱的鱼
        int kawa = kawayi[i];
        for (int q = i-1; q >= 0; q--)
        {
            int kaw = kawayi[q];
            if(kaw < kawa)
                fishs++;
        }
        printf("%d ", fishs);
    }
    return 0;
}