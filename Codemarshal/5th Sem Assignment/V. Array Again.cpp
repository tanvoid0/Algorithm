#include <iostream>

using namespace std;

 int main()
 {
 	int T;
 	cin >> T;
 	for(int a=1; a<=T; a++){
 		int n;
		cin >> n;
		int arr[n][n];
		
		for(int b=0; b<n; b++){
			for(int c=0; c<n; c++){
				cin >> arr[b][c];
			}
		}
		
		cout << "Case " << a << ": ";
		
		int i,j,k;
    	for(i=n-1, j=0; i>0; i--, j++)
    	{
	        //print top row
	        for(k=j; k<i; k++) printf("%d ", arr[j][k]);
	        //print last column
	        for(k=j; k<i; k++) printf("%d ", arr[k][i]);
	        //print last row
	        for(k=i; k>j; k--) printf("%d ", arr[i][k]);
	        //print first column
	        for(k=i; k>j; k--) printf("%d ", arr[k][j]);
	 
    	}
    	//if odd size matrix print the middle value
     	int middle = (n-1)/2;
     	if (n% 2 == 1) printf("%d", arr[middle][middle]);
     	cout << endl;
	}
	return 0;
 }
