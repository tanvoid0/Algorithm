#include <iostream>

using namespace std;

int main(void){
    int t;
    int a;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;
        int arr[a*a];

        for(int j=0; j<a*a; j++){
            cin >> arr[j];
        }
        for(int j=(a*a)-1; j>=0; j--){
            cout << arr[j];
            if(j!=0)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
