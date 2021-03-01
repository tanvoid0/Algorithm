#include <iostream>
#include <cmath>
#define MAX 6
using namespace std;

int arr[MAX][MAX];
int result = 0;

void scan() {
  for (auto & i : arr)
    for (auto & j : i)
      cin >> j;
}

void print() {
  cout << result << endl;
}

int hour_glass(int i, int j, int max){
  int sum = arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]
      + arr[i][j]
      + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
  if(sum > max){
    max = sum;
  }
//  cout << sum << " ";

  if(i == MAX-2 && j == MAX-2) return max;
  else if(i < MAX-2 && j == MAX-2){
    return hour_glass(i+1, 1, max);
  }
  else return hour_glass(i, j+1, max);
}

void solve(){
  result = hour_glass(1, 1, int(-INFINITY));
}

int main() {
  scan();
  solve();
  print();
  return 0;
}