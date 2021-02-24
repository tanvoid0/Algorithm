//2+5+8+11+..+N
#include <stdio.h>
int N = 4;

int getSum(int i)
{
    if (i > N)
        return 0;
    printf("%d ", 3 * i - 1);
    return (3 * i - 1) + getSum(i + 1);
}

int main()
{
    printf("%d\n", getSum(1));
}