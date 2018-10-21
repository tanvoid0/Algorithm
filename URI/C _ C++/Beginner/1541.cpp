#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int A, B, C;
    float res;

    while(1) {
        cin >> A;
            if(A==0)
            break;
        cin >> B >> C;

        res=(B*A)*100/C;
        C=sqrt(res);
        cout << C << endl;
    }

    return 0;
}
