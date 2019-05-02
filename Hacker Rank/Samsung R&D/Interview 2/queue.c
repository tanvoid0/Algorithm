#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;



void enQueue(int value){
    if(rear == SIZE-1)
        printf("\nQueue is Full!!");
    else {
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nInserted -> %d", value);
    }
}

void deQueue(){
    if(front == -1)
        printf("\nQueue is Empty!!");
    else{
        printf("\nDeleted : %d", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}

void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++)
            printf("%d\t",items[i]);
    }
}

int main() {
   // push items on to the stack 
   int t,i;
   scanf("%d", &t);
   int n1,n2;
   for(i = 0; i<t; i++){
   		scanf("%d", n1);
   		if(n1 == 1){
   		scanf("%d", n2);
   			enQueue(n2);
	   } else if(n1 == 2){
	   		deQueue();
	   } else if(n1 == 3){
	   		display();
	   }
	   
   }



   
   return 0;
}
