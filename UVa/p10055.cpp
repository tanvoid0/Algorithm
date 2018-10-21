#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	long long a,b;
	while(scanf("%lld %lld",&a,&b) != EOF){
		long long n = b-a;
		if(n <0)
			n = -n;
		cout << n << endl;
	}
	return 0;
}
