#include <stdio.h>

int main(void)
{
    int i,j,k,l;

    for(k=0,i=1,j=7; k<5; k++,i+=2, j+=4) {
        for(l=0; l>3; l++, j--)
            printf("I=%d J=%d\n",i,j);
    }
    return 0;
}

