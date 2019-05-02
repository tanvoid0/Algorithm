#include <stdio.h>

long long int jar[1000] = {0};
long long int N, total = 0;

int main()
{
	long long int M,i, j;
	scanf("%lld %lld", &N, &M);

	
	for(i = 0; i<M; i++){
		long long int from, to, candy;
		scanf("%lld %lld %lld", &from, &to, &candy);
		for(j=from-1; j<to; j++){
			total += candy;
		}
	}
	total = floor(total/N);
	printf("%lld\n", total);
	return 0;
}
