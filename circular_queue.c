#include <stdio.h>

#define N 5
int front=-1,rear=-1;
int cqueue[N];

void enqueue(int x){
	if (front==-1 && rear==-1){
		front=rear=0;
		cqueue[rear]=x;
	}
	else if((rear+1)%N==front){
		printf("overflow\n");
	}
	else{
		rear=(rear+1)%N;
		cqueue[rear]=x;
	}
}

void dequeue(){
	if (front==-1 && rear==-1){
		printf("underflow\n");
	}
	else if(rear==front){
		printf("%d\n",cqueue[front]);
		rear=front=-1;
	}
	else{
		printf("%d\n",cqueue[front]);
		front=(front+1)%N;
	}
}

void display(){
	if (front==-1 && rear==-1){
		printf("underflow\n");
	}
	int i=front;
	while(i!=rear){
		printf("%d ",cqueue[i]);
		i=(i+1)%N;
	}
	printf(" %d\n",cqueue[rear]);
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	display();
	dequeue();
	display();

	return 0;
}