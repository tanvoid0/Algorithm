#include <stdio.h>

int main(void)
{
    int a,b;

    for(;;) {
        scanf("%d %d",&a,&b);
        if(a==0 || b==0)
            break;
        if(a>0 && b>0)
            printf("primeiro\n");
        else if(a<0 && b>0)
            printf("segundo\n");
        else if(a<0 && b<0)
            printf("terceiro\n");
        else
            printf("quarto\n");
    }

    return 0;
}
