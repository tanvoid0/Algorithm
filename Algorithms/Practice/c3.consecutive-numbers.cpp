#include <bits/stdc++.h>

using namespace std;
void conSum(int n){
	for(int start=1, end=(n+1)/2; start < end; start++){
		int sum = 0;
		for(int i= start; i<end; i++){
			sum += i;
			if(sum == n){
				for(int j = start; j<=i; j++){
					cout << j << " " ;
				}
				cout << endl;
				break;
			} else if(sum > n){
				break;
			}
		}
	}
}
int main(){
	conSum(125);
	return 0;
}
