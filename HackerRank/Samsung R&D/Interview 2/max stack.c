#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 9999
long long int stack[100000] = {-MAX};
long long int mx = -MAX;
int x;
char str[1000], newchar[1000];;
long long int t, i, j, y, n, k;
int top=0;

void push(long long int y){
	//printf("pusing: %d on index %d\n", y, top);
	stack[top++] = y;
}

void pop()
{
	
	stack[--top] = 0;
	//printf("popping: on index %d\n", top);
}

void view(){
	mx = -MAX;
	//printf("Stack: ");
	for(j=0; j<top; j++){
		if(mx < stack[j]){
			mx = stack[j];
		}
	}
	if(mx != -MAX){
		printf("%lld", mx);	
	}
	printf("\n");
	
}

int stoi(){
	//printf("Conversion: ");
	n = 0;
	for(j= 2, k=strlen(str)-3; j<strlen(str); j++, k--){
		//printf("%c ", str[j]);
		n += (str[j]-48)*pow(10,k);
	}
	return n;
	
}

int main()
{	
	scanf("%lld", &t);
	fflush(stdin);
	
	for(i=0; i<t; i++){
		
		scanf("%[^\n]",str);
		fflush(stdin);
		//puts(str);
		//printf("CMD: %c\n", str[0]);
		if(str[0] == '1'){
			push(stoi());
		} else if(str[0] == '2'){
			pop();
		} else {
			view();
		}
		 //view();
	}
	return 0;
}
