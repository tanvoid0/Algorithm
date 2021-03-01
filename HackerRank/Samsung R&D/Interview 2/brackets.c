#include <stdio.h>
#include <string.h>

int test(char str[]){
//	printf("Test function started: %s\n",str);
	char str2[100000];
	long long int i,j;
	
	for(i = 0, j=0; i<strlen(str); i++){
		printf("char: %c\n", str[i]);
		if(str[i] == '{' || str[i] == '[' || str[i] == '('){
		
			printf("i=%d j=%d str=%s str2=%s\n", i, j, str, str2);
			str2[j] = str[i];
			j++;
		} else if(str[i] == '}' || str[i] == ']' || str[i] == ')' ){
			if ((str[i] == '}' && str2[j-1] == '{') || (str[i] == ']' && str2[j-1] == '[') || (str[i] == ')' && str2[j-1] == '(')){
				str2[j-1] = '\0';
				j--;
				printf("deleted\n");
			} else {
				printf("Mismatch\n");
				return 0;
			}
		}
		printf("Stack: %s\n", str2);
			
	}
		printf("Stack: %s\n", str2);
	//	printf("Last string: %s\n", str2);
	return 1;
}

int main(){
	long long int n,i;
	scanf("%lld", &n);
	
	for(i=0; i<n; i++){
		char str[100000] ;
		
		scanf("%s", str);
		printf("%s\n", test(str)? "YES" : "NO");
	}
}
