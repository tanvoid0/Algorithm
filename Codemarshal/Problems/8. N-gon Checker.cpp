#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;

    for(int i=0; i<T; i++){
        int x;
        cin >> x;
        cout << "Case " << i+1 << ": ";
        if(x%180 == 0){
            int a = (x/180)+2;
            cout << a << " " << x/a << endl;
        }
        else
            cout << "Impossible" << endl;
    }
}
