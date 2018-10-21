#include <iostream>
#include <algorithm>
//#include <vector>

using namespace std;

int main(void)
{
    int a[4];
    int q, r, s, t;

    cin >> a[0] >> a[1] >> a[2] >> a[3];
    //vector<int> myvector (myints)

    sort(a, a + 4);

    if((a[0] + a[1] > a[2]) || (a[1] + a[2] > a[3]))
        cout << "S" <<endl;
    else
        cout << "N" <<endl;

    return 0;

}
