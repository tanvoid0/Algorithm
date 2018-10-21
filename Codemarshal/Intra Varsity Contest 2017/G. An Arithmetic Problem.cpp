#include <iostream>


using namespace std;

int main()
{
	int t;
	int a, b, c, d;
	cin >> t;	
	for(int i=1; i<=t; i++){
			cin >> a >> b >> c >> d;
			int result;		
			if(a-b == b-c){
				int x = b-a;
				result = a + ((d-1) * x);
				//cout << d << x;
				cout << "Case " << i << ": " << result << endl;
			}
			else 
				cout << "Case " << i << ": Error" << endl;
			
				
		}
	return 0;
}

