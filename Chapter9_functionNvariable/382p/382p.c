#include <stdio.h>

int sum = 1;		// global V

int main(void) {

	int sum = 0;	// local V of main block

	printf("sum = %d\n", sum);	// the local > global
	return 0;
}

/* expectation
	>> 0
	cause, main's local variable sum(0) is a priority to global variable
*/