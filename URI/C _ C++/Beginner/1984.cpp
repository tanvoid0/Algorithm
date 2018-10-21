#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

int main(void)
{
    int i,j;
    char s[100],s2[100];

    cin >> s;

    int x = strlen(s);
    j=x-1;
    for(i=0; i<x; i++) {
        s2[i] = s[j];
        j--;
    }
    s2[i] = '\0';
    cout << s2 << endl;

    return 0;

}
