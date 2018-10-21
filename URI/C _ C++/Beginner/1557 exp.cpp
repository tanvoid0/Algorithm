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
    int n, p, q, m,i;
    int x,y,z;
    string s;
    int arr[] = {0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32};

    while((scanf("%d",&n)) != EOF && n) {

        p = pow(2,arr[n-1]);
        y= NumDigits(n);

//        cout << m <<endl;
        cout << "p: " << p << "\ny: " << y << endl;
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
