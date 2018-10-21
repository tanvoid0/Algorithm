#include <iostream>

using namespace std;

int main(void)
{
    int N, X;

    cin >> N;

    int ara[N];

    for(int i=0; i<N; i++) {
        cin >> ara[i];
    }

    int x=ara[0];
    X=0;
    for(int i=0; i<N; i++) {
        if(x > ara[i]) {
            x=ara[i];
            X=i;
        }
    }
    cout << X+1 << endl;
}
