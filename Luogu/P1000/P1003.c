#include <stdio.h> //我不会忘记这道题曾今开过s[1000000][1000000]的

int s[10005][4];//这道题储存地毯信息最后审核坐标即可，千万不要傻傻地模拟题目开数组，学会灵活思考

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 3; j++) //注意这的j<=3!
            scanf("%d", &s[i][j]);
    }
    int x, y;
    scanf("%d%d", &x, &y);
    int hi = -1;
    for (int i = 1; i <= n; i++)
    {
        if ((x >= s[i][0] && x <= s[i][0] + s[i][2]) && (y >= s[i][1] && y <= s[i][1] + s[i][3]))//关于竞赛中使用平面直角坐标系的问题
            hi = i;
    }
    printf("%d", hi);
    return 0;
}