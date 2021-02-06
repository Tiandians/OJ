#include <stdio.h>
#include <ctype.h>
#define MAX 100
int getw(char []);

int main(void)
{
    printf("Please enter some words.\n");
    char get[MAX];
    while(getw(get))
    {
    printf("here is what I get:%s\n", get);
    }
    return 0;
}

int getw(char getto[])
{
    
}