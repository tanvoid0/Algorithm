#include <stdio.h>

int main(void)
{
    int a,b;

    for(;;) {
        scanf("%d",&a);
        if(a==2002)
            break;
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");

    return 0;
}
