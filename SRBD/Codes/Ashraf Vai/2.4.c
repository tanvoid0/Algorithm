/*
1
1   0
1   0   1
1   0   1   0
1   0   1   0   1
*/

#include <stdio.h>

int N = 5;
void solve2(int i, int j)
{
    if (j > i)
        return;
    printf("%4d", j % 2);
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