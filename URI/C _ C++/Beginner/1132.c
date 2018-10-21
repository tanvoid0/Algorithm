#include <stdio.h>

int main(void)
{
    int a,b,i;
    double sum;

    scanf("%d %d",&a,&b);
    for(i=a,sum=0; i<=b; i++) {
        if(i%13==0)
            continue;
        sum+=i;
    }

    printf("%.0lf\n",sum);

    return 0;
}
