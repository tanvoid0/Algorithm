#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j, k, l;
    int t;
    cin >> t;
    for(int m = 0; m<t; m++){
    cin >> n;

    for(i=1,k=n,l=n; i<=n; i++,k--,l++){
        for(j=1; j<=((2*n)-1); j++){
            if(j >=k && j <= l){
                cout << "*";
            }
            else if(j!= ((2*n)-1)){
                cout << " ";
            }
        }
        cout << endl;
    }
    }
}
