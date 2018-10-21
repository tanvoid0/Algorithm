#include <stdio.h>

int main(void)
{
    int a2,b2,c2,d2,a1,b1,c1,d1,W=0,X=0,Y=0,Z=0;
    char ch1[3], ch2[3],x1,x2,x3,x4;
    scanf("%s %d %d %d %c %d %c %d", &ch1, &a1,&b1,&x1,&c1,&x2,&d1);

    scanf("%s %d %d %d %c %d %c %d", &ch2, &a2,&b2,&x3,&c2,&d2,&x4);

    printf("%s %s %d %d %c %d %c %d\n%s %s %d %d %c %d %c %d",ch1,a1,b1,x1,c1,x2,d1,ch2,a2,b2,x3,c2,d2,x4);

    /*if(d2>=d1)
        Z=d2-d1;
    else {
        Z =(60-d1)+d2;
        Y++;
    }

    if(c2>=c1)
        Y = Y+c2-c1;
    else {
        Y = Y+(60-c1)+c2;
        X++;
    }

    if(b2>=b1)
        X = X+b2-b1;
    else {
        X = X+(24-b1)+b2;
        W++;
    }

        W = W+a2-a1;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",W,X,Y,Z);

*/
    return 0;
}
