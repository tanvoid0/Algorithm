/*
A
B   B
C   C   C
D   D   D   D
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
    printf("%4c", i + 64);
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