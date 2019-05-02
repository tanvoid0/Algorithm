#include <iostream>
#include <string>
#include <stack>
#define oo  1000000

using namespace std;

stack <int> s;
long long int Mx=-oo;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n, x, y;
    string str;
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> x >> y;
    	
    	printf("Command: %d\n", x);
    	if(x == 1){
    		if(y > Mx){
    			Mx = y;
			}
    		
    		s.push(y);
		} else if(x == 2){
			s.pop();
		} else if(x == 3){
			printf("%lld\n", s.top());
		}
		printf("Max: %lld\n", s.top());
	}
    return 0;
}

