#include <stdio.h>

int main(void)
{
    int n,i, eve, od,pos,neg;

    for(i=0,eve=0,od=0,pos=0,neg=0; i<5; i++) {
        scanf("%d",&n);
        if(n>0)
            pos++;
        else if(n<0)
            neg++;
        if(n%2 ==0)
            eve++;
        else
            od++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", eve, od, pos, neg);

}
