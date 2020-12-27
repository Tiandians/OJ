# C Primer Plus

## 运算符

优先级总结：圆括号>`++ -- !`>`*`(间接运算符)>算数运算符>关系运算符>逻辑运算符(`&&>||`)>赋值运算符>条件运算符>逗号运算符>>

### sizeof()

### ++

前缀模式先使用后递增；后缀相反

只有圆括号的优先级比它们高

### 强制类型转换运算符

(type)

### 关系运算符

优先级比算数运算符低，比赋值运算符高

高优先级组：< <= > >=

低优先级组：== !=

### 其他赋值运算符

+=, -=, *=, /=, %=，整个表达式的值是左侧的值

### 逗号运算符（序列点）

保证左侧表达式先求值，整个逗号表达式的值是右侧项的值，*优先级比赋值运算符低*

### 逻辑运算符（序列点）

&& || !

优先级比关系运算符低

如果发现某元素让整个表达式无效，立刻停止求值

### 条件运算符

exp1?exp2:exp3

整个表达式的值，如果exp1真，为exp2，如果为假，为exp3

## 分支与跳转

### switch语句

测试表达式的值应该是一个整数（包括char）。标签（表达式内）只能是整形常量，*变量不能作为case标签*

```C
switch(整形表达式)
{
  case 常量1: statement1;
    break;
  case 常量3://多重标签用法，注意break
  case 常量2: statement2;
    break;
  
  default: statement3;
}
statement 4;
```

### goto语句

可以用于从一组嵌套循环中跳出

```C
goto name;

name:statement;
```

## 指针

&运算符：查找地址

\*间接运算符：查找值 *优先级高于+*

通常在声明时使用空格，解引用时省略空格

```C
int * pi;//声明
val = *pi;//解引用
```
指针是一个新类型，它用无符号整数表示

### 与数组

数组名是数组首元素的地址，这就是说`flizny == & flizny[0]`

指针+1后增加一个储存单元，也就是数组的下一个元素的地址

声明数组形参：`int ar[]`（只能用于声明形参）和`int * ar`一样

C保证指向数组后面的指针仍是有效的指针，但不保证所储存的值，所以不要访问

### 指针基本操作

- 赋值：指针必须和地址兼容
- 解引用
- 取址：指针有自己的地址
- 指针与整数相加减
- 递增/递减指针
- 指针求差：指针应该指向同一个数组
- 比较：前提是两者指向相同类型对象

```$
千万不要解引用未初始化的指针
```
### 保护数组

- 对形参使用const:让函数在处理数组时将数组作为常量:`int sum(const int ar[], int n);`
- const数组
- 指向const的指针:无法改变值:`const double * pd;`pd指针无法被用来更改它所指向的值，却可以让pd指向别处；常用于形参中，表明该函数不使用指针更改数据
- const数据的地址无法被赋予普通指针:否则指针可以更改const数据;const数据应用指向const的指针处理
- 不能指向别处的指针:`double * const pc`这个指针可以修改它所指向的值，但只能指向初始化时的地址
- 可以用两次const:`const double * const pc`

### 指针和多维数组

```C
int zippo [4][2];
```
#### zippo与&zippo[0]

zippo:数组名，是数组首元素的地址

&zippo[0]:zippo数组的首元素的地址

zippo[0]本身是一个*内含两个整数*的*数组*，所以zippo[0]（数组名）的值和它首元素zippo[0]的地址相同

`zippo == &zippo[0]`
`zippo[0] == &zippo[0][0]`

#### 给它们+1

给指针+1会增加对应类型大小的数值

zippo指向的对象（zippo[0]）占用了两个int

zippo[0]指向的对象（zippo[0][0]）只占用一个int

给它们+1结果不同

#### 对它们解引用

解引用一个指针得到引用对象代表的值

*(zippo[0])得到zippo[0][0]上的值

*zippo得到zippo[0]的值，这个值是zippo[0][0]的地址，也就是&zippo[0][0]

所以`**zippo == *&zippo[0][0]`

简而言之:zippo是地址的地址，也是指针的指针，这被称为双重间接

n维数组解引用得到n-1维数组

#### 指向多维数组的指针

```C
int (* pz)[2];
```

pz指向一个内含两个int类型值的数组

[]的优先级比\*高，所以`int * pax[2];` \[2\]先与pax结合成为数组，\*表示数组内含两个指针

#### 声明指向多维数组的形参

```C
void somefunction(int (*pt)[4]);
void somefunction(int pt[][4]);//空方括号表明指针
```

#### 复合字面量

```C
(int []){x, x}
```
必须在创建的同时使用



## 库函数

### stdio.h系列 标准输入输出

printf(屏幕) 返回打印字符的个数（包括空格和换行符）。如果错误返回负数。
fprinitf(文件)

int sprintf(char \*str, const char \*format, ...)

int fgetc(FILE \*stream)从文件读取下一个字符

int getchar(void)

int putchar(int char)

#### 1.转义序列

|转义序列|输出||转义序列|输出|
|---|---|-|---|---|
|\n|换行| |\\\ |反斜杠|
|\r|回车| |\\'|单引号|
|\b|退格| |\\"|双引号|
|\t|水平制表符| |\\?|问号|

#### 2.printf()转换说明及修饰符

|转换说明|输出| |转换说明|输出|
|-|-|-|-|-|
|%c|单个字符| |%d|有符号十进制整数|
|%e|浮点数，e计数法| |%f|浮点数，十进制计数法|
|%s|字符串| |%p|指针|
|%%|打印一个百分号| | | |

|修饰符|含义|
|-|-|
|-|左对齐|
|+|显示正负号|
|0|用符号0代替空格填充字段宽度（如果和精度一起用会被忽略）|
|数字|最小字段宽度|
|.数字|精度。如有必要，使用前导0|
|l+整形|long int|
|L+浮点|long double|
|z+整形|size_t|
|*|变宽字段|

#### 3.scanf()转换说明及修饰符

|转换说明|输出| |转换说明|输出|
|-|-|-|-|-|
|%c|字符||%d|有符号十进制整数|
|%e/%f/%g/%a|浮点数（float）||%i|有符号十进制整数|
|%p|指针||%s|字符串|

|修饰符|含义|
|-|-|
|*|抑制赋值|
|数字|达到最大字段宽度停止|
|l|double型（在e/f/g前）|
|L|long double型|

### math.h 标准数学

指数与对数：

* double pow(double x, double y)
    x的y次幂
* double sqrt(double x)
    平方根
* double ceil(double x)
    不小于x的最小整数值
* double fabs(double x)
    绝对值
* double floor(double x)
    不超过x的最大整数值
* double fmod(double x, double y)
    x除以y的余数

### string.h 字符串

* void \*memcpy(void\*strl,const void \*str2, size_t n)
  * copies n characters from memory area str2 to memory area str1.
* void \*memset(void \*str, int c, size_t n)
  * copies the character c to the first n characters of the string pointed to , by the argument srt.
* char \*strcat(char \*dest, const char \*src)
  * appends the string pointed to by src to the end of the string pointed to by dest.
  * 注：需要满足字符串长度
  
### stdlib.h

* int fabs(int n)

### ctype.h 处理字符

#### 字符测试函数

islower()

isspace()

isblank()

isalpha()

isupper()

isdigit()

iscntrl()

#### 字符映射函数

tolower()

toupper()

