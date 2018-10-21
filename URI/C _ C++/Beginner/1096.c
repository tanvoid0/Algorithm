#include <stdio.h>

int main(void)
{
    int i,j,k;

    for(k=0,i=1; k<5; k++,i+=2) {
        for(j=7; j>=5; j--)
            printf("I=%d J=%d\n",i,j);
    }
    return 0;
}
