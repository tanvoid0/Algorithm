#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string T;
    getline(cin,T);

    int x=T.length();
    if(x<=140)
        cout << "TWEET" << endl;
    else
        cout << "MUTE" << endl;

    return 0;
}
