#include <iostream>

using namespace std;

int main(void){
    int t;
    int a;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;
        if(a%3 == 0){
            cout << a << " is divisible by 3" << endl;
            if(a%7 == 0){
                cout << a << " is also divisible by 7" << endl;
            }
        }
        else{
            cout << a << " is not divisible by 3" << endl;
        }
    }

    return 0;
}
