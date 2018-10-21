#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void){
    double s, u, t, a;
    cin >> u >> a >> t;

    s = (u * t) + (0.5 * a * pow(t,2));

    printf("%.2lf\n",s);

    return 0;
}
