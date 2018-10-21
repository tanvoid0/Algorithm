#include <iostream>

using namespace std;

int main(void)
{
    int a,b,c,x,y,z;

    cin >> x >> y >> z;

    a=x+y+z;
    if(a>24)
        a-=24;
    else if(a<0)
        a+=24;

    cout << a << endl;

    return 0;
}
