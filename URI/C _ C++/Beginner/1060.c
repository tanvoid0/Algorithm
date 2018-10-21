#include <stdio.h>

int main(void)
{
    int i, sum;
    float j[6];

    for(i=0, sum=0; i<6; i++) {
        scanf("%f", &j[i]);
        if(j[i]> 0)
            sum ++;
    }

    printf("%d valores positivos\n",sum);

    return 0;
}
