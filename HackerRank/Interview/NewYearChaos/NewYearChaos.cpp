#include <iostream>
#include <cmath>

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
    }
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
    for (int j = 1; j <= n[i]; j++) {
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
  }
}


int main() {
  read_case();
  solve_case();
  print_case();
  return 0;
}