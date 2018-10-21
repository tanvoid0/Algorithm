#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    int T, H, M, O;

    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> H >> M >> O;
        printf("%02d:%02d - ",H,M);
        if(O==1)
            cout << "A porta abriu!" << endl;
        else if(O==0)
            cout << "A porta fechou!" << endl;
    }

    return 0;
}
