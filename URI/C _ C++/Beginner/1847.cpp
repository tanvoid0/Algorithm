/**
 * Accepted
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
  }

  void readcase() {
//    getline(cin, input);
    cin >> x >> y >> z;
  }

  int binary(char ch) {
    return ch == '-'? 0 : 1;
  }

  void solvecase() {
    if(x>y) {
      if(y<=z){
        cout << ":)";       // 1. x>y<z
      } else if((x-y) > (y-z)) {
        cout << ":)";       // 5. x>y>z && (x-y>y-z)
      } else {
        cout << ":(";       // 6. x>y>z && (x-y<=y-z)
      }
    }
    else if(x<y) {
      if(y>=z){
        cout << ":(";       // 2. x<y>=z
      }
      else if(y-x > z-y){
        cout << ":(";        // 3. x<y && (y-x) > (z-y)
      } else{
        cout << ":)";       // 4. x>y && y-x <= z-y
      }
    }
    else if(x == y) {
      if(y < z ){
        cout << ":)";
      } else {
        cout << ":(";
      }
    }
    cout << endl;
  }

  void printcase() {
    cout << total << endl;
  }
} solve;

int main() {
  int num;
  solve.readcase();
  solve.solvecase();
}
