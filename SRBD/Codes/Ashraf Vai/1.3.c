// 1+3+5+7+..+N
// didn't return 0;
#include <stdio.h>
int N = 4;
int getSum(int i)
{
    if (i > N)
        return 0;
    printf("%d ", 2 * i - 1);
    return (2 * i - 1) + getSum(i + 1);
}
int main()
{
    printf("%d\n", getSum(1));
}