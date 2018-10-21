#include <iostream>

using namespace std;

int main(void)
{
    int T,N,A,B,sum,maxim,i,j;

    cin >> T;
    for(i=0; i<T; i++) {
        cin >> N;
        for(j=1,maxim=0; j<N; j++) {
            cin >> A >> B;
            sum = A+B;
            if(sum > maxim)
                maxim= sum;
        }
        cout << "Case " << i+1 << ": " << maxim << endl;
    }
}
