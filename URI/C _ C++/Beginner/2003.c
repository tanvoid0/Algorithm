#include <stdio.h>

int main(void)
{
    int x,y,a,b;

    while((scanf("%d:%d",&x,&y)) != EOF) {
        a=7;
        b=y;
        a=x-a;

        b=(a*60)+b;
        if(b<0)
            b=0;
        printf("Atraso maximo: %d\n",b);
    }

    return 0;
}
