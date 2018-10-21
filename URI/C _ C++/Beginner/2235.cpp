#include <iostream>

using namespace std;

int main()
{
    int A,B,C;

    cin >> A >> B >> C;

    if(A==C)
        cout << "S" << endl;
    else if(A+C == B)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
