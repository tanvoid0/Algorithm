#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int p, q;
    float r, y;
    double x=0;

    cin >> p;

    for(int i=0; i < p; i++) {
        cin >> r >> q;

        if(r == 1001)
            y=1.50;
        else if(r == 1002)
            y=2.50;
        else if(r == 1003)
            y=3.50;
        else if(r == 1004)
            y=4.50;
        else if(r == 1005)
            y=5.50;

        x=(x+(y*q)) * 1.00;
    }

    cout << fixed << setprecision(2) << x << endl;
}
