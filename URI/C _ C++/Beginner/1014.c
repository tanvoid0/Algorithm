#include <stdio.h>

int main(void)
{
    float a, b;

    scanf("%f %f", &a, &b);
    printf("%.3f km/l\n", a/b);

    return 0;
}
