#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#define pi 3.14

using namespace std;

int main(void)
{
    double d,r,h,v,a;

    while((scanf("%lf %lf",&v, &d)) != EOF){
        r = d/2.00;
        a = pi * pow(r,2);
        h = v/a;

        printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,a);
    }


    return 0;
}
