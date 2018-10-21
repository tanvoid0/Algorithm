#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;
int func(int n);
void loop(int n);

int main(void)
{
    int n, p, q;
    char s[10];

    n=3;
    p=func(n);
    cout << p << endl;
    while((scanf("%d",&n)) != EOF && n) {
        loop(n);
    }
    return 0;
}

int func(int n) {
    int p,q=0;
    p = pow(pow(2,n),2);
    while(p!=0) {
        q++;
        p=p%10;
    }
    return q;
}

void loop(int n) {
    int x,y,z,c,p;
    y = func(n);
    cout << "p is " << p << " y is " << y << endl;
        for(int i=0,x=1,z=1; i < n; i++) {
            for(int j=0; j < n; j++) {
                if(y==1)
                    printf("%2d",x);
                else if(y==2)
                    printf("%3d",x);
                else if(y==3)
                    printf("%4d",x);
                else if(y==4)
                    printf("%5d",x);
                else if(y==5)
                    printf("%6d",x);
                x=x*2;
            }
            cout << endl;
            z=z*2;
            x=z;
        }
}

