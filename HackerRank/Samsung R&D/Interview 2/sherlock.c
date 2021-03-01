#include <stdio.h>

const long long mod = 1000000007LL;
long long int T, i, j, a, b, res;

long long int Rs(){
	res = 1;
	for(j=0; j<b; j++){
		res = (((res*(a+b-1-j))%mod)* powM)
	}
}

int main(){
	scanf("%lld", &T){
		for(i=0; i<T; i++){
			scanf("%lld %lld");
			res = Rs(a+b-1, a);
		}
	}
}
