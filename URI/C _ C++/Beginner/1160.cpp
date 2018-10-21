//wrong answer 20%

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    long long T, PA, PB;
    double G1, G2;
    int i;
    int anos, sec;

    cin >> T;

    for(i=0; i <T; i++) {
        cin >> PA >> PB >> G1 >> G2;
        anos=0;
        sec=0;

        while(PA <= PB ) {
            if(PA>PB)
                break;
            PA+=PA*G1/100.00;
            PB+=PB*G2/100.00;

            anos++;
            if(anos > 100) {
                sec=1;
                break;
            }
        }
        if(sec==0)
            cout << anos << " anos." << endl;
        else
            cout << "Mais de 1 seculo." << endl;
    }

    return 0;
}
