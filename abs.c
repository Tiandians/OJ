#include<stdio.h>
int main(void)
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '0';
    while((a = getchar()) != EOF)
    {
        if(c=='o'&&b=='d'&&a=='_')
		{
			printf("http://dpv.videocc.net/3f25ea56e6/8/");
            while(d = getchar())
			{
            	if(d=='_')
				{
					printf("_2.mp4");
					putchar('\n');
              	    goto gotoflag;
				}
            	else
                	putchar(d);
			}
        }
        else if(c=='d'&&b=='t'&&a=='>')
		{
            while(d = getchar())
			{
            	if(d=='<')
				{
					putchar('\n');
              	    goto gotoflag;
				}
            	else
                	putchar(d);
			}
        }
        c=b;
        b=a;
        gotoflag:;
    }
    return 0;
}

