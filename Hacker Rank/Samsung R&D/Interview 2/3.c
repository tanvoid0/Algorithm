#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char n[100];
    int i;
    int sum = 0;
    scanf("%s", &n);
    for(i=0; i<strlen(n); i++){
    	sum += (int)(n[i]) -48;
    	    	
	}
	printf("%d", sum);
    
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
