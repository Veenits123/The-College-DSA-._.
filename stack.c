#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

#define N 5
int top=-1;
int stack[N];

void push(){
	int data;
	printf("enter the data to insert\n");
	scanf("%d",&data);
	if (top==N-1){
		printf("Overflow\n");
	}
	else{
		top++;
		stack[top]=data;
	}

}

void pop(){
	if (top==-1){
		printf("underflow\n");
	}
	int temp=stack[top];
	top--;
	printf("%d\n",temp);
}

void top_(){
	if (top==-1){
		printf("stack is empty\n");
	}
	else{
		printf("%d\n",stack[top]);
	}
}

void display(){
	int i;
	for (i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int ch;
	//system("clear");
	system("cls");
	do{
		printf("enter the choice 1:push 2:pop 3:top 4:display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:top_();
			break;
			case 4:display();
			break;
			default: printf("wrong choice selected\n");
			break;
		}
	}while(ch!=0);
	
	return 0;

}