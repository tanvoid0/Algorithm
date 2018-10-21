#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <string>
using namespace std;

int NumDigits(int x);
int main(void)
{
    int n, p, q;
    int x,y,z;
    string s;

    while((scanf("%d",&n)) != EOF && n) {
        p = pow(pow(2,n),2);
        //y=strlen(s);
        y= NumDigits(p);
       // cout << "p is " << p << " y is " << y << endl;
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
    return 0;
}


int NumDigits(int x)
{
    x = abs(x);
    return (x < 10 ? 1 :
    	(x < 100 ? 2 :
    	(x < 1000 ? 3 :
    	(x < 10000 ? 4 :
    	(x < 100000 ? 5 :
    	(x < 1000000 ? 6 :
    	(x < 10000000 ? 7 :
    	(x < 100000000 ? 8 :
    	(x < 1000000000 ? 9 :
    	10)))))))));
}
