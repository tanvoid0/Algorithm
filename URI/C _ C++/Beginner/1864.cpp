#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int i=0,N,j=0;
    char s[] = "LIFE IS NOT A PROBLEM TO BE SOLVED BUT A REALITY TO BE EXPERIENCED";
    cin >> N;

    while(j < N) {
        cout << s[i];
        i++;
        j++;
    }
    s[j] = '\0';
    cout << endl;
    return 0;
}
