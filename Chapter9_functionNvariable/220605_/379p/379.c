#include <stdio.h>
void inc(int counter);

int main(void) {

	int i = 10;		// local variable in main block
	
	printf("Before calling i = %d\n", i);	// 10
	inc(i);	// copy of value
	printf("After calling i = %d\n", i);	// 10

	return 0;
}

void inc(int counter) {	// local variable in inc block
	counter++; // counter = 11
}