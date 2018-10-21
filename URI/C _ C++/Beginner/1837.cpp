#include <iostream>

using namespace std;

int main(void)
{
    int N, D, Q, R;

    cin >> N >> D;

    if(N < 0 && D > 0) {
        Q=0;
        while(N<0){
            N=N+D;
            Q++;
        }
        R=N;
        Q=-Q;
    }
    else {
        Q=N/D;
        R=N%D;
    }


    cout << Q << " " << R << endl;
    return 0;
}
