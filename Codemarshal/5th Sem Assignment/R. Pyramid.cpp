#include <iostream>

using namespace std;

int main(void)
{
    int n, i, j, k, l;
    int t;
    cin >> t;
    for(int m = 0; m<t; m++){
    cin >> n;

    for(i=1,k=n,l=n; i<=n; i++,k--,l++){
        for(j=1; j<=((2*n)-1); j++){
            if(j >=k && j <= l){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        //cout << "n" ;
        cout << endl;
    }
    }
}


/*
5
1
*
2
 *
***
3
  *
 ***
*****
4
   *
  ***
 *****
*******
5
    *
   ***
  *****
 *******
*********

Process returned 0 (0x0)   execution time : 5.435 s
Press any key to continue.
 */
