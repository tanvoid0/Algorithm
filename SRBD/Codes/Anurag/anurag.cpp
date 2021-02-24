#include <stdio.h>
int t, n, m, x, y, l;
int mat[1001][1001];
int vis[1001][1001];
int start, endd;
int ans;
typedef struct Pipe
{
    int x, y, len;
} pipe;
pipe a[1002 * 1002];
int isempty()
{
    if (start == endd)
        return 1;
    else
        return 0;
}
void push(int i, int j, int len)
{
    a[endd].x = i;
    a[endd].y = j;
    a[endd].len = len;
    vis[i][j] = 1;
    endd++;
}
pipe pop()
{
    return a[start++];
}

int checkup(int i, int j)
{
    if (mat[i][j] == 1 || mat[i][j] == 2 || mat[i][j] == 4 || mat[i][j] == 7)
        return 1;
    else
        return 0;
}
int checkdown(int i, int j)
{
    if (mat[i][j] == 1 || mat[i][j] == 2 || mat[i][j] == 5 || mat[i][j] == 6)
        return 1;
    else
        return 0;
}
int checkleft(int i, int j)
{
    if (mat[i][j] == 1 || mat[i][j] == 3 || mat[i][j] == 6 || mat[i][j] == 7)
        return 1;
    else
        return 0;
}
int checkright(int i, int j)
{
    if (mat[i][j] == 1 || mat[i][j] == 3 || mat[i][j] == 4 || mat[i][j] == 5)
        return 1;
    else
        return 0;
}
void solve()
{
    ans = 0;
    if (mat[x][y] == 0)
    {
        ans = 0;

        return;
    }
    push(x, y, l);
    //  printf("%d %d %d\n",x,y,l);
    while (isempty() == 0)
    {
        pipe p = pop();
        ans++;
        if (p.len > 1)
        {
            if (p.x - 1 >= 0 && vis[p.x - 1][p.y] == 0 && checkup(p.x, p.y) && checkdown(p.x - 1, p.y))
            {
                push(p.x - 1, p.y, p.len - 1);
            }
            if (p.x + 1 < n && vis[p.x + 1][p.y] == 0 && checkdown(p.x, p.y) && checkup(p.x + 1, p.y))
            {
                push(p.x + 1, p.y, p.len - 1);
            }
            if (p.y - 1 >= 0 && vis[p.x][p.y - 1] == 0 && checkleft(p.x, p.y) && checkright(p.x, p.y - 1))
            {
                push(p.x, p.y - 1, p.len - 1);
            }
            if (p.y + 1 < m && vis[p.x][p.y + 1] == 0 && checkright(p.x, p.y) && checkleft(p.x, p.y + 1))
            {
                push(p.x, p.y + 1, p.len - 1);
            }
        }
    }
}
void input()
{
    scanf("%d%d%d%d%d", &n, &m, &x, &y, &l);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
            vis[i][j] = 0;
        }
    }
    start = 0;
    endd = 0;
}
int main()
{
    freopen("anurag_input.txt", "r", stdin);
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        input();
        solve();
        printf("%d\n", ans);
    }
}
