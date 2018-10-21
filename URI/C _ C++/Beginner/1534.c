#include <stdio.h>

int main(void)
{
    int i, j, a, b, k, N;

    while((scanf("%d",&N)) != EOF) {
        for(a=0, i=0, j=N-1; a <N; a++) {
            for(b=0; b<N; b++) {
                if(j==b) {
                    printf("%d",2);
                }
                else if(i==b) {
                    printf("%d",1);
                }
                else {
                    printf("%d",3);
                }
            }
            printf("\n");
            i++;
            j--;
        }
    }
    return 0;
}
