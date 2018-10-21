#include <iostream>

using namespace std;

int main(void)
{
    string L;
    getline(cin,L);
    int x=L.length();

    if(x<=80)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
