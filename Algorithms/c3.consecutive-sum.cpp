
// Optimized C++ program to find sequences of all consecutive 
// numbers with sum equal to N 
#include <bits/stdc++.h>
using namespace std;
  
void printSums(int N) 
{ 
    for(int start=1, end=(N+1)/2; start < end; start++){
    	int sum = 0;
		for(int i=start; i<=end; i++){
			sum+= i;
			if(sum == N){
				for(int j=start; j <=i; j++){
					cout << j << " ";
				}
				cout << endl;
				break;
			}
			
			if(sum > N)
				break;
		}
	}
  
    
} 
  
// Driver Code 
int main() 
{ 
    printSums(125); 
    return 0; 
} 
