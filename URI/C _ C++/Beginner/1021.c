#include <stdio.h>

int main(void)
{
    int n;
    double a;

    scanf("%lf", &a);
    printf("NOTAS:\n");
    n = a/100;
    printf("%d nota(s) de R$ 100.00\n", n);
    a=(a-n*100)*1.0;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/50;
    printf("%d nota(s) de R$ 50.00\n", n);
    a=(a-n*50)*1.0;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/20;
    printf("%d nota(s) de R$ 20.00\n", n);
    a=(a-n*20)*1.0;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/10;
    printf("%d nota(s) de R$ 10.00\n", n);
    a=(a-n*10)*1.0;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/5;
    printf("%d nota(s) de R$ 5.00\n", n);
    a=(a-n*5)*1.0;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/2;
    printf("%d nota(s) de R$ 2.00\n", n);

    printf("MOEDAS:\n");
    a=(a-n*2)*1.0;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/1;
    printf("%d moeda(s) de R$ 1.00\n", n);
    a=(a-n*1)*1.0;
    a=a*100;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/50;
    printf("%d moeda(s) de R$ 0.50\n", n);
    a=a-n*50;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/25;
    printf("%d moeda(s) de R$ 0.25\n", n);
    a=a-n*25;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/10;
    printf("%d moeda(s) de R$ 0.10\n", n);
    a=a-n*10;
    printf("Note: %d Rem: %.2lf\n",n,a);
    n = a/5;
    printf("%d moeda(s) de R$ 0.05\n", n);
    a=a-n*5;
    printf("Note: %d Rem: %.2lf\n",n,a);
    printf("%.0lf moeda(s) de R$ 0.01\n", a);
    printf("Note: %d Rem: %.2lf\n",n,a);
    return 0;
}
