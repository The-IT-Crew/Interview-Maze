#include <stdio.h>

struct Node{             // Node structure
	int data;
	struct Node *link;
};

int main(){			    // Program gateway
	struct Node head, n1, n2;

	head.data = 10;    // add values
	n1.data = 20;
	n2.data = 30;
	
	head.link = &n1;    // add links
	n1.link = &n2;
	n2.link = NULL;
	
	// display linked list
	printf("%d -> %d -> %d\n",head.data,head.link->data, head.link->link->data);
	return(0);
}

/* OUTPUT
$ cc single_linked_list.c
$ ./a.out 
10 -> 20 -> 30
*/
