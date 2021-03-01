#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
char s[1001];
long long int n;
unsigned int s_len = 0;
int a_count(unsigned int i, unsigned int j) {
  if(i >= j) return 0;

  if(s[i] == 'a'){
    return a_count(i+1, j) + 1;
  } else {
    return a_count(i+1, j);
  }
}

int main(){
  cin >> s;
  cin >> n;
  s_len = strlen(s);
  long long int a_div = floor(n / s_len);
  long long int a_remain = n % s_len;

  long long int result = a_div * a_count(0, s_len);
  result += a_count(0, a_remain);
  cout << result << endl;

  return 0;
}