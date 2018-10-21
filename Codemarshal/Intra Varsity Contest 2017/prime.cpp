#include <iostream>
#include <cmath>

using namespace std;
bool prime(int n) {
	if(n == 1) {
		cout << "1" <<endl;
		return false;
	}

	else if(n==2 ) {
		cout << "2" <<endl;
		return true;
	}
	else if( n%2 == 0){
		cout << "3" <<endl;
		return false;
	}
	
	else {
		cout << "3" <<endl;
		int x = sqrt(n);
		for(int i=3; i<x+1; i+=2) {
			if(n%i == 0) {
				//cout << "3" <<endl;
				return false;
			}

		}
			cout << "4" <<endl;
		return true;
	}
}
int main()
{
	int n =1;
	while(n!= 0){
		cin >> n;
		if(prime(n))
			cout << "prime" << endl;
	}
	return 0;
}
