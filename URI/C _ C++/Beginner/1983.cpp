#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int n,i,y=0;
    float x=0;
    cin >> n;
    int m[n];
    float note[n];

    for(i=0; i < n; i++) {
        cin >> m[i] >> note[i];

       // cout << m[i] << note[i] << endl;
    }
    x=note[0];
    for(i=0; i < n; i++) {
        if(note[i] > x) {
                x=note[i];
                y=i;
        }
    }

    if(x>=8)
        cout << m[y] << endl;
    else
        cout << "Minimum note not reached" << endl;

    return 0;
}
