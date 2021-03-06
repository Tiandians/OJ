# 洛谷2019夏令营 普及组 听课笔记

## Day1 基础数据结构

内容：

* 栈、队列、链表
* 并查集
* Hash表
* 简易分块
* 堆

### 1.栈

Last in first out

栈的实现：应具有push, pop, size, top功能

```C
int s[10005], tot=0;
#define push(x) s[++tot]=x
#define pop tot--
#define size tot
#define top s[tot]
```

STL中的栈：

```cpp
#include <stack>
stack <type> name;
name.push();
name.pop();
name.empty();
//适用于各种数据类型，包括结构体
```

1. 括号匹配问题
2. 栈与函数调用
3. 后缀表达式

### 2.队列

First in first out

* 循环队列:

```cpp
const int MAXN =1 << 20;
struct queue
{
    int l, r, q[MAXN];
    queue():l(1), r(0){}
    inline void push(int x)
    {
        q[++r&MAXN-1]=x;
    }
    inline void pop()
    {
        l++;
    }
    inline int front()
    {
        return q[l & MAXN - 1];
    }
    inline bool size()
    {
        return l<=r;
    }
}
```

STL队列：

```cpp
#include<queue>

queue <type> name;

name.front();
name.push(x);
name.pop();
name.empty();
```

### 3.链表

单向、双向、循环链表

单链表的实现需要具备：

1. 删除
2. 查询（元素的后继元素）
3. 插入
4. 连接（两个单链表）

* 实现：使用数组，数组中的每一个元素是下一个节点的编号

有一链表nxt:a-b-c-d-e-f

1. 删除b：nxt\[a]=nxt\[b]，应操作它前面的元素
    * 需要从链表头一直走向待删除元素，才能找到它前面的元素，再更改它前面的元素
2. 插入b1:nxt\[b]=b1;nxt\[b1]=c，操作它和它前面的一个元素

\[todo]NOIP初赛填空

### 4.并查集

染色法，复杂度$O(n^2)$

优化方法：启发式合并：将人少的合并到人多的

* 并查集方法：

将有亲属关系的人视为一个集合，把一个集合的bin最终指向的那一个元素视为代表元素。

这样我们实现了“并”和“查”两个操作

* Union 将两个不相交的集合合并
* Find 查询一个元素所在集合代表
  

并查集的官方定义：维护一些不相交的集合森林

并查集的最坏时间复杂度：当所有点连成一条时，复杂度是$O(n^2)$。

优化方法：路径压缩：直接将每一个点指向最终元素。这样一条长链会被拆分，降低树的深度，从而降低时间复杂度。

### 5.HASH表

* HASH碰撞
  

$hash(x)=hash(y)$时，hash表会出现错误

p 开得越大碰撞率越低

解决方法：

1. 双模数：两次 hash 函数。如果两个模数都是质数，优化效率极高。但仍然会产生碰撞
2. 拉链法： hash 表每一行都是列表，在 hash 表中记录数，在查询时验证。可以完全解决碰撞，但是增加了时间复杂度
    |%ha=23333|元素1|元素2|
    |-|-|-|
    |0|||
    |2|||
    |3|||
    |4|||
    |5|5|233338|
3. 线性探测法：冲突发生时，顺序查看表中下一单元，直到找出一个空单元或查遍全表。
4. 平方探测法：
5. 链表法：这种方法的基本思想是将所有哈希地址为i的元素构成一个称为同义词链的单链表，并将单链表的头指针存在哈希表的第i个单元中，因而查找、插入和删除主要在同义词链中进行。链地址法适用于经常进行插入和删除的情况。

### 今天的作业

- [x] 括号匹配问题
- [x] 后缀表达式
- [x] 约瑟夫问题
- [x] 洛谷FMT
- [ ] NOIP初赛一题
- [ ] [P1551 亲戚](https://www.luogu.org/problemnew/show/P1551)
- [ ] [P3367 并查集](https://www.luogu.org/problemnew/show/P3367)
- [ ] 城市道路问题
- [ ] 身份证问题

## Day2 二分与贪心
