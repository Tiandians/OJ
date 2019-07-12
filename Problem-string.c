#include <stdio.h>

int main(void)
{
    char parr[] = "zifuchuanshuzu";    //与charr[]不等价 
    char charr[] = {'z', 'i', 'f', 'u', 'c', 'h', 'u', 'a', 'n', 's', 'h', 'u', 'z', 'u'};
    char charr_test[] = {'z', 'i', 'f', 'u', 'c', 'h', 'u', 'a', 'n', 's', 'h', 'u', 'z', 'u', '\0'};  //等价于charr[]

    int num_parr = sizeof(parr);
    int num_charr = sizeof(charr);
    int num_charr_test = sizeof(charr_test);

    printf("The parr[] is : %s\n", parr);
    printf("The size of parr[] is : %d %zd\n\n", num_parr, strlen(parr));
     //与charr[]不等价
    printf("The charr[] is : %s\n", charr);
    printf("The size of charr[] is : %d %zd\n\n", num_charr, strlen(charr));

    //等价于charr[]
    printf("The charr_test[] is : %s\n", charr_test);
    printf("The size of charr_test[] is : %d %zd\n", num_charr_test, strlen(charr_test));
    return 0;
}