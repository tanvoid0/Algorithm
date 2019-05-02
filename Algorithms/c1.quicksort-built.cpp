#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[] = {1,3,0,6,16,5,5};

	int n = sizeof(arr)/sizeof(arr[0]);

	sort(arr, arr+n);

	cout << "\n Array After ascending sort : ";
	for(int i =0; i<n; i++){
		cout << arr[i] << " " ;
	}

	sort(arr, arr+n, greater<int>());

	cout << "\n Array After descending sort : ";
	for(int i =0; i<n; i++){
		cout << arr[i] << " " ;
	}

	return 0;
}
