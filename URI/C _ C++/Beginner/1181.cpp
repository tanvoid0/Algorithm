#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    float M[12][12], s;
    int i, j, k, L;
    char T[2];

    cin >> L;
    cin >> T;

    for(i=0,s=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin >> M[i][j];
            if(i==L)
                s+=M[i][j];
        }
    }
    if(T[0] == 'S')
        printf("%.1f\n",s);
    else if(T[0] == 'M')
        printf("%.1f\n",s/12.0);

    return 0;
}
