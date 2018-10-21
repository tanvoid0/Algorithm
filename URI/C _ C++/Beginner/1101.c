#include <stdio.h>

int main(void)
{
    double i, M, N, temp, sum;
    for(;;) {
        scanf("%lf %lf",&M,&N);
        if(M==0 || N==0)
            break;
        if(M<N) {
            temp = M;
            M=N;
            N=temp;
        }
        for(i=N,sum=0; i<=M; i++){
            sum+=i;
            printf("%.0lf ",i);
        }
        printf("Sum=%.0lf\n",sum);
    }

    return 0;
}
