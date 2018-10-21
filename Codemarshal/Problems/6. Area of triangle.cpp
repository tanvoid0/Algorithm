#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void test(int a, int b, int c);

int main()
{
    int T,a,b,c;

    cin >> T;
    for(int i=0; i<T; i++){
        cin >> a >> b >> c;
        //cout << "entered :"<< endl;
        cout << "Case " << i+1 << ": ";
        test(a,b,c);
       // cout << "finished :"<< endl;
    }
}

void test(int a, int b, int c){
    int arr[3] = {a, b, c};
    sort(arr, arr+3);
    double p = double((a+b+c)/2.00);
    //cout <<"p: " << p << endl;
    double area = double((sqrt(p*(p-a)*(p-b)*(p-c))));
    if(arr[0]+ arr[1] > arr[2]){
        cout << area << endl;
    }
    if(arr[0]+ arr[1] <= arr[2]){
        cout << 0 << endl;
    }
}
