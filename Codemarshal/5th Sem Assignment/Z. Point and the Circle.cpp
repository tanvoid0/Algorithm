#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int T,r,x,y,x1,y1;
    double a;

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> r >> x >> y >> x1 >> y1;
        a = (double)sqrt(pow(x1-x,2)+pow(y1-y,2));
        cout << "Case " << i+1;
        if(a<r)
            cout << ": YES" <<endl;
        else
            cout << ": NO" <<endl;
    }
    return 0;
}
