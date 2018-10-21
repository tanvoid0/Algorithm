#include <iostream>
#include <cstdio>
#include <cmath>

#define size 100001
char ara[size];
int num[size];
using namespace std;


void sieve() {
    int i,j,root;
    for(i=2; i<size; i++){
        ara[i] = 1;
    }

    root = sqrt(size);
    //printf("%d\n", root);
    for(i=2,j=1; i<=root; i++) {
        if(ara[i] == 1){
            for(j=2; i*j <= size; j++){
                ara[i * j] = 0;
            }
            num[j] = i;
        }
    }
    
    root = sqrt(size);
    j=1;
    //printf("%d\n", root);
	for(i=2; i<=root; i++){
		if(ara[i]){
			num[j] = i;
			//printf("%d %d \n", j, num[j]);
			j++;
			
		}
			
	}
}

void x(){
	for(int i=0; i<100; i++){
	//	printf("%d\t", num[i]);
	}
	
}

int main() {
    int t,a;
    sieve();
    x();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
            printf("%d\n",num[a]);
        
    }
    return 0;
}
