#include <stdio.h>

int main(void)
{
    int n, y, m, d;

    scanf("%d", &n);
    y = n/365;
    n = n - (y*365);
    m = n/30;
    n = n - (m*30);
    d = n;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;
}

