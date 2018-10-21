#include <iostream>

using namespace std;

int main(void)
{
    int P, N, x=0;
    int p=0;

    cin >> P >> N;
    int a[N];

    for(int i=0; i < N; i++) {
        cin >> a[i];
        if(i!=0) {
            p = a[i] - a[i-1];
        if(p<0)
            p=-p;
        if(p>P)
            x=1;

        //cout << "p:" << p << " P:" << P << endl;
        }
    }
    if(x==1)
        cout << "GAME OVER" << endl;
    else
        cout << "YOU WIN" << endl;

    return 0;
}
