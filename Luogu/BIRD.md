# P1422 小玉家的电费
这道题我提交了3次，错了两次
最开始的代码是这样的

```C
#include<stdio.h>
#define X1 0.4463
#define X2 0.4663
#define X3 0.5663
void prin(int x, double y)
{
    printf("%.1f", x * y);
}
int main(void)
{
    int kwh;
    scanf("%d", &kwh);
    if(kwh <= 150)
        prin(kwh, X1);
    else if(kwh <401)
        prin(kwh, X2);
    else
        prin(kwh, X3);
    return 0;
}
```

这里范了语义错误。小玉家的电费
>月用电量在150千瓦时及以下**部分**按每千瓦时0.4463元执行

这个**部分**需要多加注意。

不是单纯的按用电量定全部电的价格，而是分段计价。

最后，这份代码只通过了1/5的AC，大概是kwh在150一下的，没有受到分段影响。

# P1085 不高兴的津津

第一次做多行输入的题目，惨不忍睹。

第一次的代码是这样的：

```C
#include<stdio.h>
int main(void)
{
    int a, b;
    int check = 2;//获取scanf返回值
    int count = 0;//计算星期
    int x = 0;//用于终止循环
    while (2 == check && 0 == x)//判断是否已经不高兴
    {
        count++;//星期递增
        check = scanf("%d %d", &a, &b);//获取小时
        if(a + b >= 8){
            printf("%d", count);
            x++;//已经不高兴了
        }
    }
    return 0;
}
```

错在对题意理解不清

对于多行输入，通常用for循环读取

for循环使用需要注意：

* 首先进行变量初始化（第一个initialize表达式只执行一次）

* 再对test表达式求值判断真假

* 接下来执行循环

* **然后对update表达式求值**（特别注意update在循环**结束**！）

* 再次检查test

for循环是入口条件循环

# P1089 津津的储蓄计划

最初代码：

```C
#include <stdio.h>
#define ADD 300
int main(void)
{
    int total = 0;
    int budget=0, left=0;
    int mother = 0;
    for (int month = 1; month <= 12; month++)
    {
        total += ADD;//妈妈发了300元
        scanf("%d", &budget);//读取预算
        if(total < budget){//如果不够
            printf("-%d", month);//打印月份
            break;//直接跳出
        }
        left = total - budget;//本月余额=总额-预算
        if(left / 100 > 0){//查看余额有没有100
            mother = left / 100;//妈妈拿钱
            total = left %= 100;//总额= 余额- 给妈妈的
        }
        else total = left;
        if(12 == month){//年终到了
            total += mother * 120;//还钱
            printf("%d", total);//总额
        }
        //检查一下
        printf("第%d月\nleft:%d\ntotal:%d\nmother:%d\n*结束*\n", month,left, total, mother);
    }
    return 0;
}
```

提交3次，全部0分。改来改去，不断测试，找不到毛病在哪

用伪代码重写一遍：

```md
初始化:妈妈的100元张数（mama），总额（total），预算（budget），每月余额（left)

    for(月份循环)
        total += 300
        读取budget  
        if(总额比预算小)
            打印月份
            直接跳出循环
        else（钱够）
            if(余额有100以上)
                总额=余额%100
                妈妈100元=余额/100
            else(余额没有100)
                总额=余额
        if（坚持到十二月了）
            总额=总额+妈妈*120；
            打印总额；
    返回0
```

之后发现：

* 分支：余额有100以上/余额没有100以上是不需要的！！

如果余额有100以上，总额=余额%100

如果余额没有100以上，总额还是=余额%100

在取模时，分支可以根据情况省略

程序中不要过多使用分支，否则会造成混乱，一步步演算也难以看清变量的变化情况。

最后重新根据伪代码写了一遍一次就通过了/(ㄒoㄒ)/~~

看来先写伪代码真的很重要，对初学者来说。。。分支脑壳疼

# P1909 买铅笔

这道题很尴尬，我提交了三次

第一次if条件==写成=，导致for循环无限迭代，全部TLE超时0分

第二次发现Scanf输入的两个数位置弄反了，全部WA答案错误0分

最后一次改对。写代码时认真点就可以一次过

洛谷题解中有其他办法：

* 倍增：循环box * pencil直到>=n，计算结果
* 萌新写法：全部读取分别计算，最后排序

# P1008 三连击

这道题非常奇妙

我一开始想套用3个循环枚举100~100的数

想想就不对劲，完全没有思路

一看题解：直接枚举100~333的数，x2,x3就出答案了

**更好地解决问题**

# 