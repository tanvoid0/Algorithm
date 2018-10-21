#include <iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;
};
node *head;
void push(int data){
	node* temp;
	temp = head;
	while(temp->next != NULL){
		temp->next = temp->next->next;
	}
	
	node* newNode = new node;
	newNode->data = data;
	newNode->next = NULL;
	head->next = newNode;
}

void print(){
	node* temp;
	temp = head;
	if(temp == NULL){
		cout << "No person in queue!" << endl;
		return;
	}
	while(temp != NULL){
		cout << temp->data;
		if(temp->next != NULL){
			cout << " ";
		}
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	head = NULL;
	push(1);
	push(2);
	print();
	push(3);
	print();
	
	return 0;
}
