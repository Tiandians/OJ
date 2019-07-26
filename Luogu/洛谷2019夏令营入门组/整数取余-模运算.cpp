//%的运算性质，每步取模
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main(void)
{
	char n[105]; //大整数
	int m;		 //模数
	scanf("%s%d", n, &m);
	int len = strlen(n);		  //大整数长度
	int ans = 0;				  //模的值
	for (int i = 0; i < len; i++) //(a+b)%n=((a%n)+(b%n))%n
		ans = (int)((((long long)ans * 10) % m + (n[i] - '0') % m) % m);
	printf("%d\n", ans);
	system("pause)");
	return 0;
}