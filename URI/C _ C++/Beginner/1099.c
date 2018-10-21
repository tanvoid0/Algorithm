#include <stdio.h>

int main(void)
{
    int t,a,b,i,j,sum;

    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d %d", &a,&b);
        a++;
        for(j=a,sum=0;j<b;j++) {
            if(j%2 != 0)
                sum+=sum+j;
            printf("%d ",j);
        }
        printf("a%d\n",sum);
    }

    return 0;
}
