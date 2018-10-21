#include <stdio.h>

int main(void)
{
    unsigned int T;
    int n;
    int i,j;
    scanf("%u",&T);

    for(i=0; i<T; i++) {
        scanf("%d",&n);
        for(j=0; j<=n; j++) {
            printf("%d",j);
            if(j != n)
                printf(" ");
        }
        printf("\n");
    }
}


