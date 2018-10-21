//wrong answer 20%

#include <stdio.h>

int main(void)
{
    double a;

    scanf("%lf", &a);
    if(a<=2000.00) printf("Isento\n");
    else {
        if(a>=2000.01 && a<=3000.00) {
            a = (a-2000.00)*.08;
        }

        else if(a>=3000.01 && a<=4500.00) {
            a = ((a-3000.00)*.18)+80.00;
        }
        else if(a>=4500.01) {
            a = ((a-4500.00)*.28)+350.00;
        }

        printf("R$ %.2f\n", a);
    }
    return 0;
}

