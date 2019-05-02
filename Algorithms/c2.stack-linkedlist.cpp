#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *next;
};

struct node *top;

void Push(){
	int data;
	struct node *temp;
	cout << "Enter element: ";
	cin >> data;
	temp = (struct node *)malloc(sizeof(struct node));

	if(!temp){
		cout << "Heap overflow" << endl;
		exit(1);
	}
	temp->data = data;
	temp->next = top;
	top = temp;
}

void Pop(){
	struct node *temp;
	if(top == NULL){
		cout << "Underflow" << endl;
		exit(1);
	} else {
		temp = top;
		top = top->next;
		temp->next = NULL;
		free(temp);
	}
}

void Display(){
	struct node *temp;
	if(top == NULL){
		cout << "Stack underflow" <<endl;
		exit(1);
	} else {
		temp = top;
		while(temp!=NULL){
			cout << temp->data << "->";
			temp = temp->next;
		}
	}
}

int main(){
	int ch;
	cout << "1. Push" << endl;
	cout << "2. Pop" << endl;
	cout << "3. Display" << endl;
	cout << "4. Exit" << endl;

	do {
		cout << "Enter your choice : " << endl;
		cin >> ch;
		switch (ch){
			case 1: 
				Push();
				break;
			case 2: 
				Pop();
				break;
			case 3: Display();
				break;
			case 4: cout <<"Exit" <<endl;
				break;
			default: cout << "Invalid choice" <<endl;
		}
	}while(ch!=4);
	return 0;
}

