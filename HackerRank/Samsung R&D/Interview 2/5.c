#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1000];
    int x = 48;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int i;
    scanf("%s", &str);
    for(i=0; i<strlen(str); i++){
    	
    	if(str[i] == '0'){
			arr[0]++;
		} else if(str[i] == '1'){
			arr[1]++;
		} else if(str[i] == '2'){
			arr[2]++;
		}
		else if(str[i] == '3'){
			arr[3]++;
		}
		else if(str[i] == '4'){
			arr[4]++;
		}
		else if(str[i] == '5'){
			arr[5]++;
		}
		else if(str[i] == '6'){
			arr[6]++;
		}else if(str[i] == '7'){
			arr[7]++;
		}else if(str[i] == '8'){
			arr[8]++;
		}	
		else if(str[i] == '9'){
			arr[9]++;
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d", arr[i]);
		if(i != strlen(str)-1){
			printf(" ");
		}
	}
	
	printf("\n");
    return 0;
}

