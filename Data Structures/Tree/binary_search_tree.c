#include <stdio.h>
#include <stdlib.h>

// NODE STRUCTURE FOR TREE
struct node{
	int data;
	struct node *left;
	struct node *right;
};

/*	GET A NEW TREE NODE FROM THE HEAP SPACE */
struct node * getnode(int data){
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->data	= data;
	new_node->left	= NULL;
	new_node->right	= NULL;
	return new_node;
}

/*	INSERT NEW NODE TO THE BST
	if (head is empty) -> head = newnode()
	elseif (value <= head.data) -> insert(head.left, value)
	else -> insert(head.right, value)
*/
struct node * insert(struct node *root, int value){
	if(root == NULL){
		root = getnode(value);
	}else if(value <= root->data){
		root->left = insert(root->left, value);
	}else{
		root->right = insert(root->right, value);
	}
	return root;
}

/*	SEARCH DATA IN THE BST
	if (tree is empty) -> faliure
	elseif (root == data) -> success
	elseif (data <= root.data) -> recursion(root.left)
	ekse -> recursion(root.right)
*/
int search(struct node *root, int value){
	if(root==NULL){
		return 0;
	}else if(root->data == value){
		return 1;
	}else if(root->data <= value){
		return search(root->left, value);
	}else{
		return search(root->right, value);
	}
	return 0;
}

// DRIVING CODE
void main(){
	struct node *root = NULL;
	root = insert(root, 7);
	root = insert(root, 10);
	root = insert(root, 3);
	root = insert(root, 5);
	printf("%d\n",search(root, 8));
	printf("%d\n",search(root, 7));
}

/*	EXPECTED TREE

      7
     / \
    3   10
     \
      5

*/
