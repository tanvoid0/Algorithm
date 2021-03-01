/*
    6.01m
    ->ok
    ->confusing solve function
*/
#include <stdio.h>
#define MAX 103

int T, Case, max;
int N, a[MAX], vis[MAX];

void readcase()
{
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        vis[i] = 0;
    }
}

int Left(int i)
{
    int j;
    for (j = i - 1; j >= 0; j--)
        if (0 == vis[j])
            return a[j];
    return 0;
}

int Right(int i)
{
    int j;
    for (j = i + 1; j < N; j++)
        if (0 == vis[j])
            return a[j];
    return 0;
}

void solve(int score)
{
    int j;
    for (j = 0; j < N; j++)
        if (0 == vis[j])
        {
            vis[j] = 1;
            int left = Left(j);
            int right = Right(j);
            if (left && right)
                solve(score + left * right);
            else if (left)
                solve(score + left);
            else if (right)
                solve(score + right);
            if (score > max)
                max = score;
            vis[j] = 0;
        }
}

void solvecase()
{
    max = 0;
    solve(0);
}

void printcase()
{
    printf("#%d %d\n", Case, max);
}

int main()
{
    freopen("balloon_input.txt", "r", stdin);
    scanf("%d", &T);
    for (Case = 1; Case <= T; Case++)
    {
        readcase();
        solvecase();
        printcase();
    }
    return 0;
}