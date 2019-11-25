#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

int front=-1,rear=-1;
int queue[N];

void enqueue(int x){
	if (rear==N-1){
		printf("Overflow\n");
	}
	else if(rear==-1 && front==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}

void dequeue(){
	int temp;
	if (rear==-1 && front==-1){
		printf("underflow\n");
	}
	else if(rear==front){
		temp=queue[front];
		printf("%d\n",temp);
		front=rear=-1;
	}
	else{
		temp=queue[front];
		printf("%d\n",temp);
		front++;
	}
}

void display(){
	int i;
	if (front==-1 && rear==-1){
		printf("underflow\n");
	}
	for (i=front;i<rear+1;i++){
		printf("%d ",queue[i]);
	}
}
int main(){

	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	dequeue();
	display();

	return 0;
}