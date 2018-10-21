#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int counT(int x);

int main(void)
{
    int n,i=1;
    while((scanf("%d",&n)) != EOF) {
        int total=0;
        int x=counT(n);

        if(n==0)
            printf("Caso %d: %d numero\n", i, x);

        else
            printf("Caso %d: %d numeros\n", i, x);
        printf("0");
        for(int j=1; j<=n; j++) {
            for(int k=1; k<=j; k++) {
                cout << " " << j;
            }
        }
    cout << endl <<endl;
    i++;
    }


    return 0;
}


int counT(int x)
{
    int val=0;
    for(int i=x; i>=0; i--) {
        val+=i;
    }

    return val+1;
}
