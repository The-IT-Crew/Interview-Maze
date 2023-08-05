#include <stdio.h>

void change1(int *temp){		// change value using pointers
	*temp = 20;
}

void change2(int **temp){		// change value using pointer to pointers
	**temp = 30;
}

void main(){
	int a = 10;
	int *ptr = &a;
	
	printf("%d\n",*ptr);
	
	change1(ptr);
	printf("%d\n",*ptr);
	
	change2(&ptr);
	printf("%d\n",*ptr);	
}

/* OUTPUT
$ cc pointers.c 
$ ./a.out 
10
20
30
*/
