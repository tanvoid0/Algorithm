#include <stdio.h>

int main(void)
{
    float a,b,c,d;
    double t, cr, t2, q,r;

    scanf("%f %f %f", &a, &b, &c);

    t = .5 * a * c;
    cr = 3.14159 * c * c;
    t2 = .5 * (a+b) * c;
    q = b * b;
    r = a *b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t, cr, t2, q, r);

    return 0;
}
