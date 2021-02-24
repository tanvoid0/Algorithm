/*
6   7   8   9   10
5   6   7   8
4   5   6
3   4
2
*/

#include <stdio.h>
int N = 5;
void solve2(int i, int j)
{
    if (j > i)
    {
        printf("\n");
        return;
    }
    printf("%4d", i + j);
    solve2(i, j + 1);
}
void solve(int i)
{
    if (i == 0)
        return;
    solve2(i, 1);
    solve(i - 1);
}
int main()
{
    solve(N);
}