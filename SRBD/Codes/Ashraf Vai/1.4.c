// 4+12+20+28+..+N
#include <stdio.h>
int N = 4;

int getSum(int i)
{
    if (i > N)
        return 0;
    printf("%d ", i * 8 - 4);
    return (i * 8 - 4) + getSum(i + 1);
}

int main()
{
    printf("%d\n", getSum(1));
}