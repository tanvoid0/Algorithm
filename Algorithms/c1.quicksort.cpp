#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int exp){
	int output[n];
	int i, count[n];
	for(int i=0; i<n; i++){
		count[i] = 0;
	}

	for(i=0; i<n; i++){
		count [ (arr[i]/exp)%n]++;
			}

	for(i=1; i<n; i++){
		count[i] += count[i-1];
	}

	for(i=n-1; i>=0; i--){
		output[count[ (arr[i]/exp)%n] - 1] = arr[i];
		count[(arr[i]/exp)%n]--;
	}

	for(i=0; i<n; i++)
		arr[i] = output[i];
}

void sort(int arr[], int n)
{
	countSort(arr,n,1);
	countSort(arr,n,n);
}
void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout <<endl;
}

int main(){
	int arr[] = {40, 12, 45, 32, 33, 1, 22};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Given array is in n ";
	printArr(arr, n);

	sort(arr, n);
	cout << "nSorted array is n ";
	printArr(arr, n);
	return 0;
}
