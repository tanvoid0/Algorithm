#include <stdio.h>

int main(void)
{
    int V1,i,j,L;
    int b,c;

    while((scanf("%d",&L)) != EOF) {
        for(i=0,b=0,c=0; i<L; i++) {
            scanf("%d",&V1);
            if(V1>=20)
                c = 1;
            if(V1 <20 && V1>=10)
                b = 1;
        }
        if(c==1)
            printf("3\n");
        else if(b==1)
            printf("2\n");
        else
            printf("1\n");
    }

    return 0;
}
