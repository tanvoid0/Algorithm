#include <iostream>

using namespace std;

int main(void)
{
    int N, s;

    cin >> N;
    string s1,s2,a1,a2;
    int b1, b2;

    for(int i=0; i < N; i++) {
        cin >> s1 >> a1 >> s2 >> a2;
        cin >> b1 >> b2;

        s=b1+b2;

        if(s%2==0) {
            if(a1 == "PAR")
                cout << s1 << endl;
            else if(a2 == "PAR")
                cout << s2 << endl;
        }
        else {
            if(a1 == "IMPAR")
                cout << s1 << endl;
            else if(a2 == "IMPAR")
                cout << s2 << endl;
        }
    }

    return 0;
}
