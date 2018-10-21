#include <stdio.h>

void func(char num[], int n);

int main(void)
{
    int a, b;
    char num1[32];
    char num2[32];

    while((scanf("%d %d",&a,&b)) != EOF) {
        printf("%s\n%s\n", func(num1[],a), func(num2[],b);)
    }
}


void func(char num[], int n) {
    char nm[32] = NULL;
    itoa(n,nm,2);

    for(int i=31,j=0; i>=0; i++) {
        if(nm[i] != NULL)
            num[j] = nm[i];
        else if(nm[i] == NULL)
            num[j] = 0;
        j++;
    }
}
