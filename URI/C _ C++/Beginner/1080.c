#include <stdio.h>

int main(void)
{
    int a[100],max,i,j;

    for(i=0,j=0,max=0; i<100; i++) {
        scanf("%d",&a[i]);
        if(a[i]>max) {
            max=a[i];
            j=i+1;
        }
    }
    printf("%d\n%d\n",max,j);

    return 0;
}
