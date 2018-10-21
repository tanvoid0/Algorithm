#include <stdio.h>

int main(void)
{
    double M[12][12],s;
    int C, i,j;
    char T[2];

    scanf("%d",&C);
    scanf("%s",&T);

    for(i=0,s=0; i<12; i++) {
        for(j=0; j<12; j++) {
            scanf("%lf",&M[i][j]);
            if(j==C)
                s+=M[i][j];
        }
    }

    if(T[0] == 'S')
        printf("%.1lf\n",s);
    else if(T[0] == 'M')
        printf("%.1lf\n",s/12.0);

    return 0;
}
