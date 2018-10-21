#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int n, p, q;

    while((scanf("%d",&n)) != EOF && n) {
            p=1;
        for(int i=0; i < n; i++) {
            for(int j=0; j < n; j++) {
                if(i==j)
                    p=1;
                printf("%3d",p);

                if(i>j)
                    p--;
                else
                    p++;
                if(j != n-1)
                    cout << " ";
            }
            cout << endl;
            p=i+2;
        }
        cout << endl;
    }
    return 0;
}
