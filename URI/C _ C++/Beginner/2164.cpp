#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int n;

    cin >> n;

    double x,y,total;
    x= 1+sqrt(5);
    //printf("1. x= %lf\n",x);
    x= x/2;
    //printf("2. x= %lf\n",x);
    x= pow(x,n);
    //printf("3. x= %lf\n",x);
    y= 1-sqrt(5);
    //printf("4. y= %lf\n",y);
    y= y/2;
    //printf("5. y= %lf\n",y);
    y= pow(y,n);
    //printf("6. y= %lf\n",y);

    total = (x-y);
    //printf("Total = %lf\n", total);
    total = total/sqrt(5);

    printf("%.1lf\n",total);

    return 0;
}
