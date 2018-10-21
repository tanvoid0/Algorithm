#include <iostream>

using namespace std;

int main(void)
{
    int T, A[5], x=0;
    cin >> T;

    for(int i=0; i<5; i++) {
        cin >> A[i];
        if(A[i] == T)
            x++;
    }

    cout << x <<endl;
}
