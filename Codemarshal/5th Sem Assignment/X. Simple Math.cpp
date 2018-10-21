#include <iostream>

using namespace std;
int fact(int n);
int main(void)
{
    int T, x, n;

    cin >> T;
    for(int i=1; i<=T; i++){
        cin >> x >> n;
        cout << "Case " << i << ": " << fact(x)/fact(x-n) << endl;
    }
    return 0;
}


int fact(int n)
{
    if(n==1)
        return 1;
    return n * fact(n-1);
}
