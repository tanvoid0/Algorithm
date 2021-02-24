/*
1   1   1   1   1
0   0   0   0
1   1   1
0   0
1
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
    printf("%4d", i % 2);
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