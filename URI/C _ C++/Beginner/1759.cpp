#include <iostream>

using namespace std;

int main(void)
{
    int N,i;

    cin>>N;
    for(i=1; i<=N; i++) {
        cout<<"Ho";
        if(i!=N)
            cout<<" ";
    }
    cout<<"!"<<endl;

    return 0;
}
