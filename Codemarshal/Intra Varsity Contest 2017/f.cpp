#include <iostream>
#include <cmath>

using namespace std;



bool prime(int n) {
	if(n == 1) {
		//cout << "1" <<endl;
		return false;
	}

	else if(n==2) {
		//cout << "2 <<endl;
		return true;
	}
	else if(n%2 == 0){
		return false;
	} else {
		int x = sqrt(n);
		for(int i=3; i<x+1; i+=2) {
			if(n%i == 0) {
				//cout << "3" <<endl;
				return false;
			}

		}
		//	cout << "4" <<endl;
		return true;
	}
}

int year(int y){
	int x,sum=0;
	if(y == 1)
		return 0;
	else{
	sum = 7;
		for(int i=2; i<y; i++){
			if(prime(i)){
				sum = sum + 6;
			}
			else{
				sum += 7;
			}
		}
	}
	return sum;
}

int month(int m) {
	int cl = 0;;
	if(m == 1) {
		cl = 0;
	} else if(m == 2) {
		cl =0;
	} else if(m == 3) {
		cl =3;
	} else if(m == 4) {
		cl =3;
	} else if(m == 5) {
		cl =4;
	} else if(m == 6) {
		cl =4;
	} else if(m == 7) {
		cl =5;
	} else if(m == 8) {
		cl =5;
	} else if(m == 9) {
		cl =5;
	} else if(m == 10) {
		cl =6;
	} else if(m == 11) {
		cl =6;
	} else{
		cl =7;
	}
	return cl;
}

int main() {
	int t;
	cin >> t;

	for(int i=1; i<=t; i++) {
		int cl = 0;
		int d, m, y;
		cin >> d >> m >> y;
		

		cl = month(m);

		if(prime(y) && m> 2) {
			cl--;
		}
		cl = cl + year(y);
		cout << "Case " << i << ": " << cl << endl;
	}
	return 0;

}
