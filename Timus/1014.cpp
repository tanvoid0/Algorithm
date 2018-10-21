#include <bits/stdc++.h>

void x(int n){
	int min = 10000;
	int x=0;
	int a=0,b=0;
	int root = ceil(sqrt(n));
	for(int i =2; i<root; i++){
		
		if(n%i == 0){
			x = (n/i);
			if(x+i < min){
				min = x+i;
				a=x;
				b=i;
			}

		}
	}
	if(a==0 && b==0){
		printf("-1\n");
		return;
	}
	printf("%d%d\n",b,a,min);
}

int main()
{
	

	int t,n;
	
	x(n);	
	

	

	return 0;
}