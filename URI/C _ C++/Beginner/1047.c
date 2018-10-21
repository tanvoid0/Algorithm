#include <stdio.h>

int main(void)
{
    int a,b,c,d,h,m;

    scanf("%d %d %d %d", &a,&c,&b,&d);

    if(a<b) {
        h = b-a;
        if(c<=d)
            m = d-c;
        else {
            m = ((60-c)+d);
            h--;
        }
    }

    else {
        h = ((24-a)+a);
        if(c<=d)
            m = c-d;
        else {
            m = ((60-c)+d);
            h--;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);


    return 0;
}

