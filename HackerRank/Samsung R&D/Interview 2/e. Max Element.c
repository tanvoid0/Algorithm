#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
	int data;
	struct node *next;
}

struct node *top = NULL;

void display();
void push(int);
void pop();



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    char str[100];
    for(int i=0; i<n; i++){
    	scanf("%s", str);
    	char inp[100];
    	if(str[i] == '1'){
    		for(int i =3; i<strlen(str); i++){
    			inp[i-3] = str[i];
			}
			push(int(atoi(inp.c_str())));
		} else if(str[i] == '2'){
			pop();
		} else if(str[i] == '3'){
			display();
		}
		display();
	}
    return 0;
}

