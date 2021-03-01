#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int *arr = (int *)malloc(sizeof(int)*n);
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for(i =0; i<n; i++){
		sum+= arr[i];
	}
	printf("%d\n", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
