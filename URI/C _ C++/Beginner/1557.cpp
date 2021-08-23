/**
 * Accepted
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

#define MAX 1000

using namespace std;

class Solve {
public:
  long long int testcase;
  long long int input;
  long long int result;
  long long int resArr[MAX][MAX];
  int width;

  void readcase() {
    cin >> input;
  }

  unsigned int numOfDigits(long long int num) {
    long long int digit = 0;
    do {
      ++digit;
      num /= 10;
    } while(num);
    return digit;
  }

  void solve(long long int i, long long int j) {
    if(i >= input) return;
    if(j >= input){
      cout << endl;
      solve(i+1, 0);
      return;
    }
//    printf("%d", pow(2,i+j));
    cout << setw(width) << pow(2, i+j);
    if(j+1 <input) cout << " ";

    solve(i, j+1);
  }

  void solvecase() {
    int max_num = int(pow(2,(2*input)-2));
    width = numOfDigits(max_num);
    solve(0, 0);
    cout << endl;
  }

  void printcase() {
    cout << input << endl;
  }
} solve;

int main() {
  solve.readcase();
  cout.precision(10);
  while (solve.input != 0) {
    solve.solvecase();
    solve.readcase();
  }
  return 0;
}
