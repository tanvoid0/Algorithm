#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int X;
    long long int M, total;
    scanf("%d %lld",&X, &M);
    while(X != 0 && M != 0) {
            total = M * X;
            cout << total << endl;
            scanf("%d %lld",&X, &M);
    }

    return 0;
}
