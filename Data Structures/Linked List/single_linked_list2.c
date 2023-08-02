
#include <stdio.h>
#include <stdlib.h>

// STRUCTURE OF A NODE
struct node{
	int data;
	struct node *link;
};

// HEAD POINTER
struct node *head = NULL;

// PRINT THE LINKED LIST
void display(){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->link;
	}
	printf("\n");
}

// TODO: INSERT NODE AT THE BEGINING
// TODO: INSERT NODE AT THE MIDDLE INDEX
// INSERT NODE AT THE END
void insertNode(int val){
	struct node *ptr = head;

	if(head == NULL){
		head = (struct node *) malloc(sizeof(struct node));
		head->link = NULL;
		head->data = val;
	}else{
		while(ptr->link != NULL){
			ptr = ptr->link;
		}
		struct node *temp = (struct node *) malloc(sizeof(struct node));
		temp->data = val;
		temp->link = NULL;
		ptr->link = temp;
	}
}

// TODO: DELETE NODE FROM THE START
// TODO: DELETE NODE FROM THE MIDDLE INDEX
// DELETE NODE FROM THE END
void deleteNode(){
	if(head == NULL){
		printf("Deletion not possbile\n");
	}else{
		struct node *ptr = head;
		while(ptr->link->link != NULL){
			ptr = ptr->link;
		}
		free(ptr->link);
		ptr->link = NULL;
	}
}

// DRIVING CODE
int main(){
	deleteNode();
	insertNode(10);
	insertNode(20);
	insertNode(30);
	insertNode(40);
	display();
	deleteNode();
	deleteNode();
	display();
	return(0);
}

/* OUTPUT
$ cc single_linked_list.c
$ ./a.out 
Deletion not possbile
10 20 30 40 
10 20 
*/
