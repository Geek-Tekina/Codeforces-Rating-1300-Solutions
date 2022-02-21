#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct node
{
    int x, y;
}p[1003];
bool cmp(node a, node b)
{
    return a.x < b.x || a.x == b.x && a.y > b.y;
}
int main()
{
    int i, j;
    int n, s;
    while( ~scanf("%d%d", &s, &n))
    {
        for(i = 0; i < n; i++)
            scanf("%d%d", &p[i].x, &p[i].y);
        sort(p, p + n, cmp);
        for(i = 0; i < n; i++)
        {
            if(s > p[i].x) s += p[i].y;
            else break;
        }
        if(i == n) puts("YES");
        else puts("NO");
    }
    return 0;
}