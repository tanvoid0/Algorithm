// 1*2+2*3+3*4+..+N
#include <stdio.h>

int N = 3;
int getSum(int i)
{
    if (i > N)
        return 0;
    printf("%d ", i * (i + 1));
    return i * (i + 1) + getSum(i + 1);
}

int main()
{
    printf("%d\n", getSum(1));
}