#include <stdio.h>

int main(void)
{
    int i, pos;
    float n,sum;

    for(i=0,pos=0,sum=0; i<6; i++) {
        scanf("%f",&n);
        if(n>=0) {
            pos++;
            sum =sum+n;
        }
    }
    printf("%d valores positivos\n%.1f\n", pos,sum/pos);

    return 0;

}
