#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stack>
using namespace std;


string Brace(string str){
    int l = str.size();
    int *stack = (int *)malloc(sizeof(int)*l);
    int top = -1;
    int j;
    for(j =0; j<l; j++){
    	top++;
    	stack[top] = str[j];
    	if((stack[top]==')'&&(top-1>=0&&stack[top-1]=='('))||(stack[top]=='}'&&(top-1>=0&&stack[top-1]=='{'))||(stack[top]==']'&&(top-1>=0&&stack[top-1]=='['))){
    		top = top-2;
		}
	}
	if(top==-1)
		return "YES";
	else 
		return "NO";
}


int main(){
    long long int n;
    int i;
    cin >> n;
    string str;
    for(i=0; i<n; i++){
        cin >> str;
        cout << Brace(str) << endl;
        
        //printf("%s\n", test(str));
    }
}
