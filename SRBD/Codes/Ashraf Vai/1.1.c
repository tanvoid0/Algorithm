// 1 + 2 + 3 + 4 + 5
#include <stdio.h>
int N;
int getSum(int n)
{
    if (n > N)
        return 0;
    return n + getSum(n + 1);
}
int main()
{
    N = 3;
    printf("%d\n", getSum(1));
}