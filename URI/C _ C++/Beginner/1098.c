#include <stdio.h>

int main(void)
{
    float i,j;
    int k;

    for(i=0,j=1; i<=2; ) {
        //for(k=0; k>=3; k++,j++)
            printf("I=%d J=%d\n",i,j);
        i+=.2;
        j+=1.8;
    }
    return 0;
}

