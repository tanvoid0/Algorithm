#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    int par[5], impar[5], n, i, j, k, a;

    for(a=0, i=0, j=0; a<15; a++) {
        cin >> n;
        if(n%2 == 0){
            par[i] = n;
            i++;
        }
        else if(n%2 != 0) {
            impar[j] = n;
            j++;
        }
        if(i==5) {
            for(k=0; k<5; k++)
                cout << "par[" << k << "] = " << par[k] << endl;
            i=0;
        }
        if(j==5) {
            for(k=0; k<5; k++)
                cout << "impar[" << k << "] = " << impar[k] << endl;
            j=0;
        }
    }
    k=0;
    while (k <j) {
         cout << "impar[" << k << "] = " << impar[k] << endl;
         k++;
    }
    k=0;
    while (k <i) {
         cout << "par[" << k << "] = " << par[k] << endl;
         k++;
    }
    return 0;
}
