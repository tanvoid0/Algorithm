#include <stdio.h>

int main(void)
{
    int t,in,out,x,i;

    scanf("%d", &t);
    for(i=0, in=0, out=0; i<t; i++) {
        scanf("%d", &x);
        if(x>=10 && x<=20)
            in++;
        else
            out++;
    }

    printf("%d in\n%d out\n",in,out);

    return 0;
}
