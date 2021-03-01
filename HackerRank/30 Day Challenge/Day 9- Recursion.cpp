#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long y;
long long factorial(int x);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;
    cin >> x;
    y=0;
    cout << factorial(x) << endl;
    return 0;
}

long long factorial(int x){
    while(x!=1) {
        y = y * factorial(x--);
    }
    return y;
}
