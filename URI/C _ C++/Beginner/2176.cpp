#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char S[100];
    int c,i;
    scanf("%s",S);
    int x= strlen(S);
    for(i=0,c=0; i < x; i++) {
        //cout << i << " " << S[i] << endl;
        if(S[i] == '1') {
            //cout << i+1 << ". " << S[i] << endl;
            c++;
        }
    }
    //cout << "c= " << c << endl;
    if(c%2 == 0)
        cout << S << 0 << endl;
    else
        cout << S << 1 << endl;

    return 0;
}
