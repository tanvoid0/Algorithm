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
    int n, p, q, r, s, t;
    int x,y,z;
    //string s;
    int arr[] = {0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32, 34, 36};

    while((scanf("%d",&n)) != EOF && n) {
        p = pow(2,arr[n-1]);
        //r = pow(2,n-1);
        //s = NumDigits(r)+1;
        y= NumDigits(p);
        cout << y << " " << p <<endl;
        //cout << p << " " << y << endl;
       // cout << "p is " << p << " y is " << y << endl;
        for(int i=0,x=1,z=1; i < n; i++) {
            for(int j=0; j < n; j++) {
                //*
                q = NumDigits(x);

                /*if(y-q == 1)
                    printf(" ");
                else if(y-q == 2)
                    printf("  ");
                else if(y-q == 3)
                    printf("   ");
                else if(y-q == 4)
                    printf("    ");
                else if(y-q == 5)
                    printf("     ");
                else if(y-q == 6)
                    printf("      ");
                else if(y-q == 7)
                    printf("       ");
                if(j == 0)
                    printf("\b");
                printf("%d",x);
                */
                if(y==1)
                    printf("%d",x);
                else if(y==2)
                    printf("%2d",x);
                else if(y==3)
                    printf("%3d",x);
                else if(y==4)
                    printf("%4d",x);
                else if(y==5)
                    printf("%5d",x);
                //*/
                if(j!=n-1)
                    printf(" ");
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
