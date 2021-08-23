#include <iostream>
#include <cmath>
#define MAX 100001
using namespace std;

int arr[MAX];
int new_arr[MAX];
int t, r; // Testcase, number of rotation
int result;
int base;

void read_case() {
  cin >> t >> r;
  for(int i=0; i<t; i++){
    cin >> arr[i];
  }
}

void print_case() {
  for(int i=0; i<t; i++){
    cout << new_arr[i];
    if(i != t-1) cout << " ";
  }
  cout << endl;
}

void solve(int i, int j){
  new_arr[i] = arr[j];
  if(j >= t-1){
    return solve(i+1, 0);
  }
  if(i == t -1)
    return;
  return solve(i+1, j+1);
}

void solve_case(){
  base = t > r ? r : r%t;
  solve(0, base);
}

int main() {
  read_case();
  solve_case();
  print_case();
  return 0;
}