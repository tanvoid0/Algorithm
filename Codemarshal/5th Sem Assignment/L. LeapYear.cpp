#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;

    if((n%400 == 0) || (n%100 != 0 && n%4 == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
