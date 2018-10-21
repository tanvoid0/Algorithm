#include <stdio.h>

int main(void)
{
    int r;
    double v;

    scanf("%d", &r);

    v= (4.0/3) * 3.14159 * r * r * r;

    printf("VOLUME = %.3lf", v);

    return 0;
}
