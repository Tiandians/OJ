#include<stdio.h>
#include <string.h>
_Bool is_number(int a, int b, int c);

int main(void)
{
	int a = 123, b, c;
	for (; a <= 333;a++)
	{
		b = a * 2;
		c = a * 3;
		
	}
		return 0;
}

_Bool is_number(int a, int b, int c){
	_Bool number[9];
	memcpy(number, 0, sizeof(number));
	number[a % 10] = 1;
	number[a / 100] = 1;
}
