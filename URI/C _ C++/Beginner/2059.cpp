#include <iostream>

using namespace std;

int main(void)
{
    int p, j1, j2, r, a, win =0;

    cin >> p >> j1 >> j2 >> r >> a;

    int x;
    x=j1+j2;
    x=x%2;
    //cout << "x=" << x << " p=" << p << " r=" << r << " a=" << a << endl;

    if(x!=p)
        win = 1;
    else
        win = 2;
    if((r == 1 && a == 0) || (r==0 && a==1))
        win = 1;
    else if(r==1 && a==1)
        win = 2;
    cout << "Jogador " << win << " ganha!" << endl;

    return 0;
}
