#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(void)
{
    int N, M,i;
    char s[20];

    cin >> N >> M;
    for(i=0; i<M; i++) {
        cin >> s;
        if(!(strcmp(s,"fechou")))
            N++;
        else if(!(strcmp(s,"clicou")))
            N--;
    }

    cout << N << endl;

    return 0;
}
