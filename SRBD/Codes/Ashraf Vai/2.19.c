/*
E   E   E   E   E
D   D   D   D
C   C   C
B   B
A
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
    printf("%4c", i + 64);
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