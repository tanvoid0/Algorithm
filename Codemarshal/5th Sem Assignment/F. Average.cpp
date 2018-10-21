#include <iostream>
#include <cstdio>
//#include <iomanip>

using namespace std;

int main(void){
    int a,b,c,d,e;
    double avg;
    cin >> a >> b >> c >> d >> e;
    avg = (double)(a+b+c+d+e) / 5.00;
        //cout << fixed << setprecision(2) << avg << endl;
    printf("%.2lf\n",avg);
    return 0;
}
