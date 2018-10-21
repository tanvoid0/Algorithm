#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(void)
{
    long double X;
    char s[120];
    cin >> X;
    if(X>=0)
        cout << "+" ;
    cout << fixed << setprecision(4) << scientific << X <<endl;
    printf("%.4LE\n", X);

    return 0;
}
