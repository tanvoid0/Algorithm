#include <iostream>
using namespace std;
int arr[] = {1, 2, 5, 3, 7, 8, 6, 4};
int count;
void swap(int* a, int* b){
    count++;
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = (low-1);
    for(int j=low; j<=high-1; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}


void quickSort(int a[], int low, int high){
    if(low <high){
        int pi = partition(a, low, high);

        quickSort(a, low, pi-1);
        quickSort(a, pi+1, high);
    }
}
int main(){
    quickSort(arr, 0, 7);
    for(int i=0; i<8; i++){
        cout << arr[i] << "\t";
    }
    cout << "\nc: " << count << endl;
}