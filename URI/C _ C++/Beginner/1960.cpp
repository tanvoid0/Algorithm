//time limit exceed;

#include <iostream>

using namespace std;

int main(void)
{
    int N,i;
    char s[20];

    cin >> N;

    for(i=0; N!=0; i++) {
        if(N ==1000.00) {
            s[i] = 'M';
            N-=1000;
        }
        else if(N >= 900 && N < 1000 ) {
            s[i++] = 'C';
            s[i] = 'M';
            N-=900;
        }

        else if(N >= 500) {
            s[i] = 'D';
            N-=500;
        }
        else if(N >= 400 && N < 500 ) {
            s[i++] = 'C';
            s[i] = 'D';
            N-=400;
        }
        else if(N >= 100) {
            s[i] = 'C';
            N-=100;
        }
        else if(N >= 90 && N < 100 ) {
            s[i++] = 'X';
            s[i] = 'C';
            N-=90;
        }
        else if(N >= 50) {
            s[i] = 'L';
            N-=50;
        }
        else if(N >= 40 && N < 50 ) {
            s[i++] = 'X';
            s[i] = 'L';
            N-=40;
        }
        else if(N >= 10) {
            s[i] = 'X';
            N-=10;
        }
        else if(N >= 9 && N < 10 ) {
            s[i++] = 'I';
            s[i] = 'X';
            N-=9;
        }
        else if(N >= 5) {
            s[i] = 'V';
            N-=5;
        }
        else if(N >= 4 && N < 5 ) {
            s[i++] = 'I';
            s[i] = 'V';
            N-=4;
        }
        else if(N >= 1) {
            s[i] ='I';
            N-=1;
        }
    }
    s[i] = '\0';

    cout << s << endl;
}
