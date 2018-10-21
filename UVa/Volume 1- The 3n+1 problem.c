#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);

    while(n != 1) {
        printf("%d ", n);
        if(n%2 != 0) {
            n = 3*n + 1;
        }
        else
            n = n / 2;
    }
    printf("%d", n);

    return 0;
}
