#include <bits/stdc++.h>

int main()
{
	int ara[5][5] = {						
					{1, 4, 5, 16, 17},
					{2, 3, 6, 15, 18},
					{9, 8, 7, 14, 19},
					{10, 11, 12, 13, 20},
					{25, 24, 23, 22, 21}
				};

	int t,n;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d", &n);

		for(int j=0; j<5; j++){
			for(int k=0; k<5; k++){
				if(ara[j][k] == n){
					printf("Case %d: %d %d\n", i+1, k+1, j+1);
					break;
				}
					
			}
		}
	}

	return 0;
}