#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double A, B, X;

    cin >> A >> B;

    X= B-A;
    X=(X/A)*100.00;

    cout << fixed << setprecision(2) << X << "%" << endl;

    return 0;
}
