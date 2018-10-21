#include <iostream>

using namespace std;

int main(void)
{
    int T,n;

    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> n;
        for(int j=0; j<=n; j++) {
            cout << j;
            if(j != n)
                cout << " ";
        }
        cout << endl;
    }
}


