/**
 * Unaccepted
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
  int a, b;


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
    else if (((i >= center - inner) && (i <= (center + inner))) && ((j >= center - inner) && (j <= center + inner)))
      cout << 1;
    else if (i == j) cout << 2;
    else if (i == input - j - 1) cout << 3;
    else cout << 0;
    solve(i, j + 1);
  }

  void readcase() {
    cin >> a >> b;
  }

  void solvecase() {
    int div, rem;
    if (a < 0 && b > 0) {
      div = int(a / b) - 1;
      rem =-1*((div*b)-a);
    } else {
      div = int(a / b);
      rem = a % b;
    }

    cout << div << " " << rem << endl;
  }

  void printcase() {
    cout << input << endl;
  }
} solve;

int main() {
  int num;
  solve.readcase();
  solve.solvecase();
  return 0;
}
