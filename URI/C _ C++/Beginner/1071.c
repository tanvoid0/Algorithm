#include <stdio.h>

int main(void)
{
    int x, y, temp, sum, i;
    scanf("%d %d",&x,&y);
    if(x<y) {
        temp=x;
        x=y;
        y=temp;
    }

    for(i=y+1, sum=0; i<x; i++) {
        if(i%2 != 0)
            sum = sum+i;
    }
    printf("%d\n",sum);
}
