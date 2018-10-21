#include <stdio.h>

int main(void)
{
    int n,t,i;

    scanf("%d",&t);
    //printf("%d",t);

    for(i=0; i<t; i++) {
    scanf("%d",&n);

    if(n==0) {
        printf("NULL\n");
        continue;
    }
    else if(n%2==0) printf("EVEN ");
    else if(n%2!=0) printf("ODD ");
    if(n>0) printf("POSITIVE\n");
    else printf("NEGATIVE\n");
    }
    return 0;
}
