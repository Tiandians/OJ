# C Primer Plus

## 运算符

优先级总结：圆括号>++ -- !>算数运算符>关系运算符>逻辑运算符(&&>||)>赋值运算符>条件运算符>逗号运算符>>

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

*间接运算符：查找值

通常在声明时使用空格，解引用时省略空格

```C
int * pi;//声明
val = *pi;//解引用
```
指针是一个新类型，它用无符号整数表示


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

