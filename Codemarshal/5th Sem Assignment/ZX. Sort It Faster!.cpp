#include <iostream>

using namespace std;
int x;
void merge(int arr[], int st, int e){
	int i = st;
	int mid = (st+e)/ 2;
	int j = mid+1;
	
	
	int k = e-st+1;
	int sorted[k+9];
	k=0;
	
	while(i<=mid && j<=e){
		if((arr[i] < arr[j] && x == 1) || (arr[i] > arr[j] && x==2)){
			sorted[k] = arr[i];
			i++;k++;
		}
		else{
			sorted[k] = arr[j];
			j++;k++;
		}
	}
	
	while(i<=mid){
		sorted[k] = arr[i];
		i++;k++;
	}
	while(j<=e){
		sorted[k] = arr[j];
		j++;k++;
	}
	
	for(i=0; i<k; i++){
		arr[st] = sorted[i];
		st++;
	}
}

void divide(int arr[], int st, int e){
	if(st == e)
		return;
		
	int mid = (st+e) / 2;
	
	divide(arr, st, mid);
	divide(arr, mid+1, e);
	
	merge(arr, st, e);
}

int main(){
	int t;
	cin >> t;
	for(int i=1; i<=t; i++){
		int n;
		cin >> n;
		int arr[n];
		for(int j=0; j < n; j++){
			cin >> arr[j];
		}
		
		cin >> x;
		
		divide(arr, 0, n-1);
		
		cout << "Case " << i << ":" << endl;
		
		for(int j=0; j<n; j++){
			cout << arr[j];
			if(j != n-1)
				cout << " ";
		}
		
		cout << endl;
	}
}
