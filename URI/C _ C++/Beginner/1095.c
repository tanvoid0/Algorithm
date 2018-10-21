#include <stdio.h>

int main(void)
{
    int i,j;
    for(j=60, i=1; j>=0; j-=5) {
        printf("I=%d J=%d\n",i,j);
        i+=3;
    }

    return 0;
}
