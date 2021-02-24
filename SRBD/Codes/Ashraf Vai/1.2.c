//2+4+6+8+...+N
#include <stdio.h>
int N = 4;

int getSum(int n)
{
    if (n > N)
        return 0;
    return (2 * n) + getSum(n + 1);
}
int main()
{
    printf("%d\n", getSum(1));
}