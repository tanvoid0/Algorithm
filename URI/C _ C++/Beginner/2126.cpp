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
  string sub;
  int pos = -1;
  bool cont = false;
  int c = 1;
  int total_subs = 0;


  void solve(int i, int j) {
  }

  void readcase() {

  }

  int binary(char ch) {
  }

  void solvecase() {
    // Loop through the string
    for(int i=0, j=0, k; i<input.length(); i++){
      if(input[i] != sub[j]) {
        j = 0;
      }
//      cout << i << "th char: " << input[i] << " " << sub[j] << endl;

      if(input[i] == sub[j]) {
        // if this is the first char
        if(j == 0){
          // save the index for later
          k = i;
        }
        // check for the last substring
        j++;
      }
      if(j == sub.length()){
        // a complete cycle found
        cont = true;
        // save the initial position
        pos = k;
        // initialize the string
        j = 0;
        total_subs++;
      }
    }
  }

  void printcase() {
    cout << "Caso #" << c++ << ":" <<endl;
    if(pos == -1) {
      cout << "Nao existe subsequencia" << endl;
    } else {
      cout << "Qtd.Subsequencias: " << total_subs << "\nPos: " << pos+1 << endl;
    }
    cout << endl;
    cont = false;
    pos = -1;
    total_subs = 0;
  }
} solve;

int main() {
  char subStr[100], str[100];
  while(  scanf("%s %s", subStr, str) != EOF){
    solve.sub = subStr;
    solve.input = str;
    solve.solvecase();
    solve.printcase();
  }
//  solve.readcase();
//  solve.solvecase();
}
