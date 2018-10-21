#include <stdio.h>

int main(void)
{
    float a=0,b=0;

    for(;;) {
        if(a==0)
            scanf("%f", &a);
        if(a<0 || a>10) {
            printf("nota invalida\n");
            a=0;
            continue;
        }
        if(b==0)
            scanf("%f", &b);
        if(a<0 || a>10) {
            printf("nota invalida\n");
            b=0;
            continue;
        }

        printf("%d %d media = %.2f\n",a,b,(a+b)/2);
        break;
    }

    return 0;
}
