#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cin >> N;
    for(int i=0; i<N; i++) {
        int T;
        cin >> T;
        int x=2015-T;
        if(x>0)
            cout << x << " D.C." <<endl;
        else {
            x=-x;
            cout << x+1 << " A.C." << endl;
        }
    }

    return 0;
}
