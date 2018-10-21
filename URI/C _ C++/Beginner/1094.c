#include <stdio.h>

int main(void)
{
    int i,t,a,r,c,s,tot;
    float r1, c1, s1;
    char ch;

    scanf("%d",&t);
    for(i=0,r=0,c=0,s=0; i<t;i++) {
        scanf("%d %c", &a, &ch);
        if(ch == 'R')
            r+=a;
        else if(ch == 'C')
            c+=a;
        else if(ch == 'S')
            s+=a;
    }
    tot=r+s+c;
    r1=r*100.00/tot;
    s1=s*100.00/tot;
    c1=c*100.00/tot;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",tot,c,r,s,c1,r1,s1);

    return 0;
}
