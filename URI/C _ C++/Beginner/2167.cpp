#include <iostream>

using namespace std;

int main()
{
    int N,i;
    cin >> N;
    int R[N],test=0;

    for(i=0; i<N; i++) {
        cin >> R[i];
    }
    for(i=1; i<N; i++) {
        if(R[i] < R[i-1]) {
            test = i+1;
            //cout << "Break" << endl;
            break;
        }
        //cout << i << endl;
    }
    if(test != 0)
        cout << test << endl;
    else
        cout << 0 << endl;

    return 0;
}
