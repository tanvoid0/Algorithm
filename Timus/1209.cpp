#include <stdio.h>
#define max 100001

char num[max];

void lp()
{
    int i, j ,k;
    for(i=0,k=0; k<max; i++){
        num[k] = '1';
        k++;
        for(j=0; j<i && k<max; j++){
            num[k] = '0';
            k++;
        }
    }
    
}

int main()
{
    lp();
    int t,i;
    scanf("%d", &t);
    int x[t];
    for(i=0; i<t; i++){
        scanf("%d", &x[i]);
    }

    for(i=0; i<t; i++){
        printf("%c", num[x[i]-1]);
        if(i != t-1){
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}