#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){
    double a, b, c;

    double x1,x2,x;
    cin >> a >> b >> c;
    x = (double)sqrt((b*b)-(4*a*c));
    x1 = (double) (-b + x)/(2*a);
    x2 = double (-b - x)/(2*a);

    printf("%.2lf\n%.2lf\n",x1,x2);

    return 0;
}
