#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int T;
    char str[100],str2[100];

    //getline(cin,str);
    gets(str);
    cout << str <<endl;
    int x = strlen(str);
    x--;
    cout << x << endl;
   for(int i=x, j=0; i>=0; i--) {
        str2[i] = str[j];
        j++;
    }
    cout << str2 << endl;
    for(int i=0; i<x; i++) {
        if((str2[i] >= 'a' && str2[i] <= 'z') || (str2[i] >= 'A' && str2[i] <= 'Z'))
            printf("%c",str[i]+3);
        else
            printf("%c",str[i]);
            cout << endl;
    }

    //for(int i=0; i<)

    //cout << str <<endl;

    //reverse(str.begin(),str.end());


    //cout << str << endl;

    return 0;
}
