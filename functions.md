# 函数笔记

## stdio.h系列

printf(屏幕)/fprinitf(文件)/

int sprintf(char \*str, const char \*format, ...)

int fgetc(FILE \*stream)从文件读取下一个字符

int getchar(void)

int putchar(int char)

### 1.转义序列

|转义序列|输出||转义序列|输出|
|---|---|-|---|---|
|\n|换行| |\\\ |反斜杠|
|\r|回车| |\\'|单引号|
|\b|退格| |\\"|双引号|
|\t|水平制表符| |\\?|问号|

### 2.printf()转换说明及修饰符

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
|0|用符号0代替空格填充字段宽度|
|数字|最小字段宽度|
|.数字|精度。如有必要，使用前导0|
|l|long int|
|L|long double|
|z|size_t|
|*|变宽字段|

### 3.scanf()转换说明及修饰符

|转换说明|输出| |转换说明|输出|
|-|-|-|-|-|
|%c|字符||%d|有符号十进制整数|
|%e/%f/%g/%a|浮点数||%i|有符号十进制整数|
|%p|指针||%s|字符串|

|修饰符|含义|
|-|-|
|*|抑制赋值|
|数字|达到最大字段宽度停止|
|l|double型（在e/f/g前）|
|L|long double型|

## math.h系列

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

## string.h系列

* void \*memcpy(void\*strl,const void \*str2, size_t n)
  * copies n characters from memory area str2 to memory area str1.
* void \*memset(void \*str, int c, size_t n)
  * copies the character c to the first n characters of the string pointed to , by the argument srt.
* char \*strcat(char \*dest, const char \*src)
  * appends the string pointed to by src to the end of the string pointed to by dest.
  * 注：需要满足字符串长度
  
## stdlib.h

* int fabs(int n)
