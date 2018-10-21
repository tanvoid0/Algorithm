#include <stdio.h>

int main(void)
{
    int a, x, n;

    scanf("%d", &a);
    x=a%100;
    n=a/100;
    printf("%d nota(s) de R$ 100.00\n", n);
    a = x;
    x=a%50;
    n=a/50;
    printf("%d nota(s) de R$ 50.00\n", n);
    a = x;
    x=a%20;
    n=a/20;
    printf("%d nota(s) de R$ 20.00\n", n);
    a = x;
    x=a%10;
    n=a/10;
    printf("%d nota(s) de R$ 10.00\n", n);
    a = x;
    x=a%5;
    n=a/5;
    printf("%d nota(s) de R$ 5.00\n", n);
    a = x;
    x=a%2;
    n=a/2;
    printf("%d nota(s) de R$ 2.00\n", n);
    a = x;
    x=a%1;
    n=a/1;
    printf("%d nota(s) de R$ 1.00\n", n);

    return 0;
}
