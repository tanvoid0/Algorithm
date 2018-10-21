#include <iostream>

using namespace std;

int main(void)
{
    long long T,n;

    cin >> T;

    for(long long i=0; i<T; i++){
        cin >> n;
        long long a[n];

        for(long long j=0; j<n; j++){
            cin >> a[j];
        }
        for(long long j=n-1; j>=0; j--){
            cout << a[j];
            if(j!=0)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
