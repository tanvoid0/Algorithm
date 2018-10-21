#include <iostream>
using namespace std;

int main(void)
{
    int d1,d2,h1,h2,m1,m2,s1,s2,ans;
    string s;

    cin >> s >> d1 >> h1 >> s >> m1 >> s >> s1;
    cin >> s >> d2 >> h2 >> s >> m2 >> s >> s2;

    int res=(d2-d1)*3600*24+(h2-h1)*3600+(m2-m1)*60+(s2-s1);

    //cout << d1 << " " << d2 << " " << h1 << " " << h2 << " " << m1 << " " << m2 << " " << s1 << " "<< s2 << " " << s << endl;


    cout << res/(3600*24) << " dia(s)" << endl;
    res%=(3600*24);
    cout << res/(3600) << " hora(s)" <<endl;
    res%=3600;
    cout << res/ 60 << " minuto(s)" << endl;
    res%=60;
    cout << res << " segundo(s)" << endl;

    return 0;
}
