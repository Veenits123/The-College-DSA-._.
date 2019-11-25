#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
    struct node *next;

};

void print(struct node *head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}

int main(){

	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=3;
	head->next=NULL;
	print(head);

	return 0;
}