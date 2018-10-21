#include <stdio.h>



int main() {





    char c = '%';

    float input,total,increase;

    scanf("%f",&input);

    if (input<= 400.00)

    {



       increase=(input*15)/100;

        total=input+increase;

        printf("Novo salario: %.2f\n",total);

        printf("Reajuste ganho: %.2f\n",increase);

        printf("Em percentual: 15 %c\n",c);

    }

    else if(input >= 400.01 && input <= 800.00)

    {

        increase=(input*12)/100;

        total=input+increase;

        printf("Novo salario: %.2f\n",total);

        printf("Reajuste ganho: %.2f\n",increase);

        printf("Em percentual: 12 %c\n",c);

    }

    else if(input>=800.01 && input <= 1200.00)

    {

        increase=(input*10)/100;

        total=input+increase;

        printf("Novo salario: %.2f\n",total);

        printf("Reajuste ganho: %.2f\n",increase);

        printf("Em percentual: 10 %c\n",c);

    }

    else if(input>=1200.01 && input <= 2000.00)

    {

        increase=(input*7)/100;

        total=input+increase;

        printf("Novo salario: %.2f\n",total);

        printf("Reajuste ganho: %.2f\n",increase);

        printf("Em percentual: 7 %c\n",c);

        }

        else

    {

        increase=(input*4)/100;

        total=input+increase;

        printf("Novo salario: %.2f\n",total);

        printf("Reajuste ganho: %.2f\n",increase);

        printf("Em percentual: 4 %c\n",c);

        }







    return 0;
}
