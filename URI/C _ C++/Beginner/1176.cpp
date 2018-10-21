#include <iostream>

using namespace std;

int main(void)
{
    int long long F[60];
    int i,j,T,N;
    F[0]=0;
    F[1]=1;

    cin>>T;

    for(i=0; i<T; i++) {
            cin>>N;
        for(j=2; j<=N; j++) {
                F[j]= F[j-2]+F[j-1];
        }
        cout<<"Fib("<<N<<") = "<<F[N]<<endl;
    }

    return 0;
}
