// 1.3 + 3.5 + 5.7 + .. + N
//  (i*2-1)*(i*2+1)

#include <stdio.h>
int N = 3;
int getSum(int i)
{
    if (i > N)
        return 0;
    int n = (i * 2 - 1) * (i * 2 + 1);
    printf("%d ", n);
    return n + getSum(i + 1);
}

int main()
{
    printf("%d\n", getSum(1));
}