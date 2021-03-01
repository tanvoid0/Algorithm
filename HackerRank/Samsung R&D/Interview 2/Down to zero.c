#include <stdio.h>
#include <math.h>
long long int i, j;
long long int rec(long long int n){
	
	for(j=2; j <= (n/2); j++){
		if(n%j == 0){
			printf("%d ", n/j);
			return n/j;
		}
	}
	printf("%d ",n-1);
	return n-1;
}
int main(){
	long long int Q, N, total;
	scanf("%lld", &Q);
	for(i = 0; i<Q; i++){
		scanf("%lld", &N);
		total = 0;
		//printf("Loop for: %d ", N);
		while(N>0){
			
			N= rec(N);
			//printf("%d ", N);
			total++;
		
		}
		printf("%lld\n", total);
	}
	
	return 0;
}


