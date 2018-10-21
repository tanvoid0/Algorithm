
#include <iostream>

using namespace std;

int main(void){

    int a, b;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        cout << i;
        if(i!=b){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
