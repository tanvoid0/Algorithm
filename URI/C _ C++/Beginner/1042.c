#include <stdio.h>

int main(void)
{
    int a, b, c,x,y,z;

    scanf("%d %d %d", &a, &b, &c);
    x=a;
    y=b;
    z=c;
    if(x<y && x<z) {
        if(y<z)
            printf("%d\n%d\n%d\n",x,y,z);
        else
            printf("%d\n%d\n%d\n",x,z,y);
    }
    else if(y<x && y<z) {
        if(x<z)
            printf("%d\n%d\n%d\n",y,x,z);
        else
            printf("%d\n%d\n%d\n",y,z,x);
    }
    else {
        if(x<y)
            printf("%d\n%d\n%d\n",z,x,y);
        else
            printf("%d\n%d\n%d\n",z,y,x);
        }

    printf("\n%d\n%d\n%d\n", x, y, z);

}
