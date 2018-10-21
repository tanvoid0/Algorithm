#include <iostream>

using namespace std;

int main(void){
    int t;
    int a;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;
        int count =0;
        for(int j=0; j<=a; j++){
            if(j%3 == 0)
                count++;
        }
        cout << "Case " << i+1 << ": " << count << endl;
    }

    return 0;
}
