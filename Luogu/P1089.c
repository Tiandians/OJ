#include <stdio.h>
#define ADD 300
int main(void)
{
    int total = 0;
    int budget=0, m_yue=0;
    int mother = 0;
    for (int month = 1; month <= 12; month++)//
    {
        total += ADD;//妈妈发了300元
        scanf("%d", &budget);//读取预算
        if(total < budget){//如果不够
            printf("-%d", month);//打印月份
            break;//直接跳出
        }
        m_yue = total - budget;//本月余额=总额-预算
        if(m_yue / 100 > 0){//查看余额有没有100
            mother = m_yue / 100;//妈妈拿钱
            total = m_yue %= 100;//总额= 余额- 给妈妈的
        }
        else total = m_yue;
        
        if(12 == month){//年终到了
            total += mother * 120;//还钱
            printf("%d", total);//总额
        }
        //检查一下
        printf("第%d月\nm_yue:%d\ntotal:%d\nmother:%d\n*结束*\n", month,m_yue, total, mother);
    }
    return 0;
}
