#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main(){
    string s;
    cin >> s;
    int x=1;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            x++;
        }
    }
    cout << x << endl;
    return 0;
}
