#include <stdio.h>

int main(){
	long long int T, K;
	int i;
	scanf("%lld", &T);
	for(i=0; i<T; i++){
		scanf("%lld", &K);
		if(K%2 == 0){
			K = (K/2)*(K/2);
		} else {
			K = (K/2)*((K/2)+1);
		}
		printf("%lld\n", K);
	}
	return 0;
}
