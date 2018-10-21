#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    long long T,n;

    cin >> T;

    for(long long i=0; i<T; i++){
        cin >> n;
        //long long a[n];
	
		vector<int> myvector;
		
		int temp;
        for(long long j=0; j<n; j++){    
			cin >> temp;
			myvector.push_back(temp);
        }
        reverse(myvector.begin(),myvector.end());
        
        for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    		std::cout << ' ' << *it;
  		
        
        cout << endl;
    }
    return 0;
}
