#include <iostream>
using namespace std;
int main(void)
{
    int N,L,i,j,t2,t3,t4,t5;

    cin >> N;
    for(i=0,t2=0,t3=0,t4=0,t5=0; i<N; i++) {
        cin >> L;
        if(L%2==0)
            t2++;
        if(L%3==0)
            t3++;
        if(L%4==0)
            t4++;
        if(L%5==0)
            t5++;
    }

    cout << t2 << " Multiplo(s) de 2" << endl;
    cout << t3 << " Multiplo(s) de 3" << endl;
    cout << t4 << " Multiplo(s) de 4" << endl;
    cout << t5 << " Multiplo(s) de 5" << endl;


    return 0;
}
