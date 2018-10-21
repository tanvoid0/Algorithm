#include <stdio.h>

int main(void)
{
    int i,x;

    scanf("%d",&x);
    for(i=1; i<=x; i++) {
        if(i%2!=0)
            printf("%d\n",i);
    }

    return 0;
}
