/*
A
A   B
A   B   C
A   B   C   D
*/

#include <stdio.h>
int N = 4;
void solve2(int i, int j)
{
    if (j > i)
    {
        printf("\n");
        return;
    }
    printf("%4c", j + 64);
    solve2(i, j + 1);
}
void solve(int i)
{
    if (i > N)
        return;
    solve2(i, 1);
    solve(i + 1);
}
int main()
{
    solve(1);
}