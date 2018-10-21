#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int M, P;
    double x;

    cin >> M >> P;
    x=M * 1.00 / P;
    //cout << x << endl;
    cout << fixed << setprecision(2) << x << endl;

    return 0;
}
