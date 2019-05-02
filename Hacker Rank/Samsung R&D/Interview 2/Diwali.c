#include <stdio.h>

long long int lights(int n){
    long long int  tmp = 2;
    long long int res = 1;
    while(n){
        if(n&1){
            res = (res * tmp)%100000;
        }
        tmp = (tmp*tmp)%100000;
        n >>=1;
	}
    return res % 100000;
}

int main(){
    int i;
    long long int T, N;
    scanf("%lld", &T);
    while(T--){
        scanf("%lld", &N);
        long long int res = lights(N);
        res--;
        if(res == -1){
        	res = 99999;
		}
        printf("%lld\n", res);
    }
    
    return 0;
}
