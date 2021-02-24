/*
                    1   //  1,1 1,2 1,3 1,4 1,5     5
                1   2   //  2,1 2,2 2,3 2,4 2,5     5
            1   2   3
        1   2   3   4
    1   2   3   4   5
*/

#include <stdio.h>
int N = 5;

void solve3(int i, int k)
{
    if (k > i)
    {
        printf("\n");
        return;
    }
    printf("%4d", k);
    solve3(i, k + 1);
}

void solve2(int i, int j)
{
    if (j > N - i)
        return;
    printf("%4c", ' ');
    solve2(i, j + 1);
}
void solve(int i)
{
    if (i > N)
        return;
    solve2(i, 1);
    solve3(i, 1);
    solve(i + 1);
}
int main()
{
    solve(1);
}
// void solve2(int i, int j)
// {
//     if (j > N)
//     {
//         printf("\n");
//         return;
//     }
//     if (i + j > N)
//         printf("%4d", i + j - N);
//     else
//         printf("%4c", ' ');

//     solve2(i, j + 1);
// }
// void solve(int i)
// {
//     if (i > N)
//         return;
//     solve2(i, 1);
//     solve(i + 1);
// }
// int main()
// {
//     solve(1);
// }