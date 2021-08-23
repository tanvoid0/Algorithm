/**
 * accepted
 */
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstring>

#define MAX 1000

using namespace std;

class Solve {
public:
  string input;
  int scream = 0;
  int total = 0;
  int x,y,z;


  void solve(int i, int j) {
//    if (i >= input) return;
//    if (j >= input) {
//      cout << endl;
//      solve(i + 1, 0);
//      return;
//    }
//    /**
//     * center
//     */
//    if (i == center && j == center) cout << 4;
//    else if (((i >= center - inner) && (i <= (center + inner))) && ((j >= center - inner) && (j <= center + inner)))
//      cout << 1;
//    else if (i == j) cout << 2;
//    else if (i == input - j - 1) cout << 3;
//    else cout << 0;
//    solve(i, j + 1);
  }

  void readcase() {
    getline(cin, input);
  }

  int binary(char ch) {
    return ch == '-'? 0 : 1;
  }

  void solvecase() {
    if(input == "caw caw"){
      printcase();
      total = 0;
      scream++;
    } else {
      int x = binary(input[0]);
      int y = binary(input[1]);
      int z = binary(input[2]);
      int num = 0;
      if(z) {
        num = 1;
      }
      if(y) {
        num += 2;
      }
      if(x) {
        num += 4;
      }
      total += num;
    }
  }

  void printcase() {
    cout << total << endl;
  }
} solve;

int main() {
  int num;
  solve.readcase();
  while(true) {
    solve.solvecase();
    if(solve.scream == 3) break;
    solve.readcase();
  }
  return 0;
}
