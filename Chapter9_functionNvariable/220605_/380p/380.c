#include <stdio.h>

int A, B;		// global variable initialized to zero
int add();		// prototype

int main(){
	int answer;	// local in main block
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);

	A = 5;		// initialize global variable
	B = 6;		// initialize global variable
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);

	return 0;
}

int add() {
	return A + B;
}