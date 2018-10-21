#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cin >> N;
    string s[N];
    int x;

    for(int i=0; i<N; i++) {
        cin >> s[i] >> x;
    }

    for(int i=0; i<N; i++) {
        if(s[i] == "Thor")
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
