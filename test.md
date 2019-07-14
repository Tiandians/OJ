1.循环读取输入
每次进行判断
int cur=0;
char curname[25];
int curqimo, curbanji;
char curganbu, curxibu;
int curlunwen;

if(curqimo>80&&curlunwen>=1)
    cur+=8000;
if(curqimo>85&&curbanji>85)
    cur+=4000;
if(curqimo>90)
    cur+=2000;
if(chrqimo>85&&curxibu=='Y')
    cur++1000;
if(curbanji>80&&curganbu=='Y')
    cur++850;