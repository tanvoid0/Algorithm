#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int main(void)
{
    int i=0;
    unsigned long long A;
    double a[100];

    while((scanf("%llu",&A)) != EOF) {
        a[i] = sqrt(A);
        i++;
    }
    i--;
    while(i >= 0) {
        cout << a[i] << endl;
        i--;
    }

    return 0;
}
