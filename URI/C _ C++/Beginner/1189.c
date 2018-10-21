#include <stdio.h>

int main(void)
{
    char O[2];
    double M[12][12],s;
    int i,j,k,l;
    scanf("%s",&O);

    for(i=0,s=0,k=11,l=0; i<12; i++) {
        for(j=0; j<12; j++) {
            scanf("%lf",&M[i][j]);
            if(j<k && j<l)
                s+=M[i][j];
        }
        k--;
        l++;
    }
    if(O[0] == 'S')
        printf("%.1lf\n",s);
    else if(O[0] == 'M')
        printf("%.1lf\n",s/30.0);

    return 0;
}

