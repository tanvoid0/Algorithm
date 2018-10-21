//10% wrong answer
#include <iostream>

using namespace std;

void cm(int a, int b, int c);

int main()
{
    int A,B,C;

    cin >> A >> B >> C;
    cm(A,B,C);

    return 0;
}


void cm(int a, int b, int c)
{
    int x=0;

        if((a-b) > (b-c))
            x=1;

        if(x==1)
            cout << ":)" << endl;
        else
            cout << ":(" << endl;

}
