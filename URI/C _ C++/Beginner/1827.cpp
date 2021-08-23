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
  double input;
  int center;
  int inner;

  void readcase() {
    cin >> input;
  }


  void solve(int i, int j) {
    if (i >= input) return;
    if (j >= input) {
      cout << endl;
      solve(i + 1, 0);
      return;
    }
    /**
     * center
     */
    if (i == center && j == center) cout << 4;
    else if (((i >= center - inner) && (i <= (center + inner))) && ((j >= center - inner) && (j <= center + inner))) cout << 1;
    else if (i == j) cout << 2;
    else if (i == input - j-1) cout << 3;
    else cout << 0;
    solve(i, j + 1);
  }

  void solvecase() {
    center = int(input / 2);
    inner = int(input/2) - int(input / 3);
    solve(0, 0);
    cout << endl;
  }

  void printcase() {
    cout << input << endl;
  }
} solve;

int main() {
  int num;
  while (scanf("%d", &num) != EOF) {
    solve.input = num;
    solve.solvecase();
  }
  return 0;
}
