#include <stdio.h>

int main(void)
{
    int n,i, eve;

    for(i=0,eve=0; i<5; i++) {
        scanf("%d",&n);
        if(n%2 ==0)
            eve++;
    }
    printf("%d valores pares\n", eve);

    return 0;

}
