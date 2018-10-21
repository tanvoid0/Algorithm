#include <iostream>

using namespace std;

int main(void){
    int t;
    int a;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;
        if(a==1)
            cout << "Case " << i+1 << ": NO" <<endl;
        else{
            int c=0;
            for(int j=2; j<a; j++){
                if(a%j==0)
                    c=1;
                }
            if(c==0){
                cout << "Case " << i+1 << ": YES" <<endl;
            }
            else
                cout << "Case " << i+1 << ": NO" <<endl;
        }
    }

    return 0;
}
