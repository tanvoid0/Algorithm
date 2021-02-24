#include <stdio.h>
#define MAX 1003

typedef struct nodeStruct
{
    int x, y, l;
} Node;
Node Q[MAX * MAX];
int front, rear;
int T, Case, Ans;
int N, M, X, Y, L;
int grid[MAX][MAX];
int vis[MAX][MAX];

void initQ()
{
    front = rear = 0;
}

int isEmpty()
{
    return (front == rear);
}

void push(int x, int y, int l)
{
    Q[rear].x = x;
    Q[rear].y = y;
    Q[rear++].l = l;
}

Node pop()
{
    return Q[front++];
}

int goUp(int i, int j)
{
    int x = grid[i][j];
    return (1 == x || 2 == x || 4 == x || 7 == x);
}

int goDown(int i, int j)
{
    int x = grid[i][j];
    return (1 == x || 2 == x || 5 == x || 6 == x);
}

int goLeft(int i, int j)
{
    int x = grid[i][j];
    return (1 == x || 3 == x || 6 == x || 7 == x);
}

int goRight(int i, int j)
{
    int x = grid[i][j];
    return (1 == x || 3 == x || 4 == x || 5 == x);
}

void readcase()
{
    int i, j;
    scanf("%d %d %d %d %d", &N, &M, &X, &Y, &L);
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            scanf("%d", &grid[i][j]);
            vis[i][j] = 0;
        }
}

void solvecase()
{
    Ans = 0;
    initQ();
    if (grid[X][Y])
    {
        vis[X][Y] = 1;
        printf("pipe\n");
        push(X, Y, L);
    }
    while (0 == isEmpty())
    {
        Ans++;
        Node node = pop();
        int x = node.x;
        int y = node.y;
        int l = node.l;
        if (l > 1)
        {
            if (x - 1 >= 0 && goUp(x, y) && goDown(x - 1, y) && 0 == vis[x - 1][y])
            {
                push(x - 1, y, l - 1);
                vis[x - 1][y] = 1;
            }
            if (x + 1 < N && goDown(x, y) && goUp(x + 1, y) && 0 == vis[x + 1][y])
            {
                push(x + 1, y, l - 1);
                vis[x + 1][y] = 1;
            }
            if (y - 1 >= 0 && goLeft(x, y) && goRight(x, y - 1) && 0 == vis[x][y - 1])
            {
                push(x, y - 1, l - 1);
                vis[x][y - 1] = 1;
            }
            if (y + 1 < M && goRight(x, y) && goLeft(x, y + 1) && 0 == vis[x][y + 1])
            {
                push(x, y + 1, l - 1);
                vis[x][y + 1] = 1;
            }
        }
    }
}

void printcase()
{
    printf("%d\n", Ans);
}

int main()
{
    freopen("anurag_input.txt", "r", stdin);
    scanf("%d", &T);
    for (Case = 1; Case <= T; Case++)
    {
        readcase();
        solvecase();
        printcase();
    }

    return 0;
}