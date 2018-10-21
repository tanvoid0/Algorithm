#include<stdio.h>
int main()
{
    int i,j,a,b,r[1000];
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        for(j=0;j<b;j++){
            scanf("%d",&r[j]);
            }
            printf("%d",r[b-1]);
            for(j=b-2;j>=0;j--){
                printf(" %d",r[j]);
            }
        printf("\n");
    }

    return 0;
}
