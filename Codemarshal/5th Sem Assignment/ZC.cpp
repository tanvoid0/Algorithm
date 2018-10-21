#include <iostream>

using namespace std;

int main()
{
  long long t;
  cin >> t;
  for(long long i=1; i<=t; i++){
    long long n,q, max, min, sum;
    cin >> n >> q;
    long long arr[n];
    for(long long j=0; j<n; j++){
      cin >> arr[j];
    }
	
	cout << "Case " << i << ":" << endl;
    for(long long j=0; j<q; j++){
      long long a, b;
      cin >> a >> b;
      max = min = arr[a];
      sum =0;
      for(long long k=a-1; k<=b-1; k++){
        if(max < arr[k]){
          max = arr[k];
        }
        if(min > arr[k]){
          min = arr[k];
        }
        sum+= arr[k];
      }
      cout << max << " " << min << " " << sum << endl;
    }
  }
  
  return 0;
}
