#include <iostream>

using namespace std;

double result;
int n;

void readcase(){
    cin >> n;
}

void printcase(){
    cout << result;
}

double solve(int i) {
    if(i == 0) return 0;
    return 1/(6+solve(i-1));
}

void solvecase(){
    result = 3+solve(n);
}

int main(void)
{
    readcase();
    solvecase();
    printcase();
}
