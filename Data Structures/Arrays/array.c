#include <stdio.h>

void main(){
	char ch[] = "GATE2024";         // inline array initialization
	char *ptr = ch;
	printf("%s\n", ptr);		// GATE2024
	printf("%c\n", ptr[0]);		// G
	printf("%c\n", ptr[0]+3);	// J
	printf("%s\n", ptr+3);		// E2024
}
