#include <iostream>

using namespace std;

int main()
{
    int N, M, rem;

    while (1){
        cin >> N >> M;
        if(N==0 && M==0)
            break;
        rem = M-N;
        //cout << M << endl;
        for(int i=0; i<2; i++){

            if(rem>=100)
                rem-=100;
            else if(rem>=50)
                rem-=50;
            else if(rem>=20)
                rem-=20;
            else if(rem>=10)
                rem-=10;
            else if(rem>=5)
                rem-=5;
            else if(rem>=2)
                rem-=2;
            else
                break;
            //cout << rem << endl;
        }
        //cout << N << " " << rem << endl;
        if(rem == 0)
            cout << "possible" << endl;
        else
            cout << "impossible" << endl;
        //cin >> N >> M;
    }
}
