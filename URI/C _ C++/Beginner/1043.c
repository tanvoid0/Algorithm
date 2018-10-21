#include <stdio.h>

int main(void)
{
    float a,b,c,area;

    scanf("%f %f %f", &a,&b,&c);

    if(a<b+c && b<c+a && c<a+b) {
        area=a+b+c;
        printf("Perimetro = %.1f\n", area);
    }

    else {
        area = .5*c*(a+b);
        printf("Area = %.1f\n", area);
    }

    return 0;
}


