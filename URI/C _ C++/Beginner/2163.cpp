#include <iostream>
//#include <stdio.h>
using namespace std;

int main(void)
{
    int N, M, i, j, a,b;
    int L[100][100];

    cin >> N >> M;
    for(i=0; i<N; i++) {
        for(j=0; j<M; j++) {
            cin >> L[i][j];
        }
    }

    for(i=0,a=0,b=0; i<N; i++) {
        for(j=0; j<M; j++) {
            if(L[i][j]==42) {
                if((L[i-1][j-1]==7) && (L[i-1][j] ==7) && (L[i-1][j+1] ==7) && (L[i][j-1]==7) && (L[i][j+1]==7) && (L[i+1][j-1]==7) && (L[i+1][j] == 7) && (L[i+1][j+1] ==7)) {
                    a=i+1;
                    b=j+1;
                    break;
                }
            }
        }
    }

    cout << a << " " << b << endl;

    return 0;
}

