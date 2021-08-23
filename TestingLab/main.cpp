#include <iostream>
#include <cmath>
<<<<<<< HEAD

#define MAX 100001
#define TEST_CASE 11
using namespace std;

int arr[TEST_CASE][MAX];
int t, n[MAX];
int result[TEST_CASE] = {0};

void read_case() {
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n[i];
    for (int j = 1; j <= n[i]; j++) {
      cin >> arr[i][j];
      if (arr[i][j] - j >= 3) {
        result[i] = -1;
      }
    }
    if (result[i] != -1) {
      for (int k = 1; k < n[i]; k++) {
        for (int l = 1; l < n[i]; l++) {
          if (arr[i][l] > arr[i][l + 1]) {
            int temp = arr[i][l];
            arr[i][l] = arr[i][l + 1];
            arr[i][l + 1] = temp;
            result[i]++;
          }
        }
      }
    }
    if (result[i] == -1)
      cout << "Too chaotic";
    else
      cout << result[i];
    cout << endl;
  }
}

void print_case() {
  for (int i = 0; i < t; i++) {
    if (result[i] == -1)
      cout << "Too chaotic";
    else
      cout << result[i];
    cout << endl;
  }
}


void solve_case() {
  for (int i = 0; i < t; i++) {
    if (result[i] != -1) {
      for (int k = 1; k < n[i]; k++) {
        for (int l = 1; l < n[i]; l++) {
          if (arr[i][l] > arr[i][l + 1]) {
            int temp = arr[i][l];
            arr[i][l] = arr[i][l + 1];
            arr[i][l + 1] = temp;
            result[i]++;
          }
        }
      }
    }
  }
}


int main() {
  read_case();
//  solve_case();
//  print_case();
=======
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
>>>>>>> master
  return 0;
}