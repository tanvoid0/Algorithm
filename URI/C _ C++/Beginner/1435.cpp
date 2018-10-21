#include <iostream>
#include <cstdio>

using namespace std;

int n;

int main(void)
{
    while((scanf("%d",&n)) != EOF && n) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                printf("%3d", min(min(i+1,j+1), min(n-i,n-j)));
                if(j != n-1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
