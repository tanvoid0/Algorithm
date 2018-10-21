#include <stdio.h>

int main(void)
{
    int i, n;

    scanf("%d", &n);
    for(i=0; i<1000; i++) {
        if(i%n == 0)
            printf("%d\n", i+2);
    }

    return 0;
}
