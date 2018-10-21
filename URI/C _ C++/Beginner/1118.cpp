#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    float a, b;
    int n;

    do {
        do{
            cin >> a;
            if(a<0 || a>10)
                cout << "nota invalida" << endl;
            //if(a>0 && a<=10.00)
              //  break;
        } while(a<0 || a>10);

        do{
            cin >> b;
            if(b<0 || b>10)
                cout << "nota invalida" << endl;
            //if(a>0 && a<=10.00)
              //  break;
        } while(b<0 || b>10);

        printf("media = %.2f\n", (a+b)/2.00);
        do {
            cout << "novo calculo (1-sim 2-nao)" <<endl;
            cin >> n;
        } while(n!=1 && n!=2);
    } while(n==1);

    return 0;
}
