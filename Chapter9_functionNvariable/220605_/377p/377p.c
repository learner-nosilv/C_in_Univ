#include <stdio.h>

int main(void) {

	int i;	// local variable of main block

	for (i = 0; i < 5; i++) {
		int temp = 1;	// local variable of for block
		printf("temp = %d\n", temp);
		temp++;
	}
	// Block 1st.[i=0] new temp = 1 , temp = 2 delete
	// Block 2nd.[i=1] new temp = 1 , temp = 2 delete
	// Block 3rd.[i=2] new temp = 1 , temp = 2 delete
	// Block 4th.[i=3] new temp = 1 , temp = 2 delete
	// Block 5th.[i=4] new temp = 1 , temp = 2 delete
	// Block 6th.[i=5] i < 5 False loop out, i delete

	return 0;
}