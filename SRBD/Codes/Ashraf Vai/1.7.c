// 2*1 + 5*3 + 8*5+ .. + N
#include <stdio.h>

int N = 3;
int getSum(int i)
{
    if (i > N)
        return 0;
    printf("%d ", (3 * i - 1) * (2 * i - 1));
    return (3 * i - 1) * (2 * i - 1) + getSum(i + 1);
}

int main()
{
    printf("%d\n", getSum(1));
}