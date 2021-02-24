/*
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
*/

#include <stdio.h>

int N = 5;
void solve2(int i, int j)
{
    if (j > i)
        return;
    printf("%4d", j);
    solve2(i, j + 1);
}

void solve(int i)
{
    if (i > N)
        return;
    solve2(i, 1);
    printf("\n");
    solve(i + 1);
}

int main()
{
    solve(1);
}