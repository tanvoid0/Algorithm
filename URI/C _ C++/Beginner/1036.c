#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, x1, x2;

    scanf("%f %f %f", &a, &b, &c);
    if((a==0) || (((b*b)-4*a*c)<0)) {
        printf("Impossivel calcular\n");
    }

    else {
        x1 = ((-b)+sqrt((b*b)-4*a*c))/(2*a);
        x2 = ((-b)-sqrt((b*b)-4*a*c))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
    }

    return 0;
}
