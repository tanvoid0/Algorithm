#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main(void)
{
    char s[3][100],s1[10];
    int j=0,i=0,n=0,x,sum;
    while(i<=3) {
        gets(s1);
        if(s1[0] == 'c')
            i++;
        else if(s1[0] == '-') {
            s[i][j] = '1';
            j++;
        }
        else if(s1[0] == '*') {
            s[i][j] = '0';
            j++;
        }
    }
    for(i=0,x=0,sum=0; i<3; i++) {
        n= strlen(s[i]);
        for(j=n; j>=0; j--) {
            if(s[i][j] == '1') {
                sum+=pow(2,x);
                x++;
            }
            else if(s[i][j] == '0')
                x++;
        }
        cout << sum <<endl;
    }
}
