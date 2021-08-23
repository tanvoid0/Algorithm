#include <iostream>
using namespace std;

typedef struct node {
	int data;
	struct node* next;
} Node;

void addQueue(Node** root, int data){
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	if(*root == NULL) *root = temp;
	else {
		Node* node = *root;
		while(node->next !=NULL){
			node = node->next;
		}
		node->next = temp;
	}

}

void deQueue(Node* root){
	if(root == NULL) return;
	Node* temp = root;
	root = root->next;
	delete temp;
}

void push(Node** root, int data){
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = *root;
	(*root) = temp;
	
}

void print(Node** root){
	Node* head = *root;
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
	Node* root = NULL;
	int t, n;
	cin >> t;
	for (int i=0; i<t; i++){
		cin >> n;
		addQueue(&root, n);
	}
	deQueue(root);
	print(&root);

	return 0;
}