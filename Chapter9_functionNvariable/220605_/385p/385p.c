#include <stdio.h>

void sub();

int main(void) {
	sub();
	sub();
	sub();

	return 0;
}

void sub() {
	static int scount = 0; // static - initialize once
	int acount = 0;
	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);
	scount++;	// 1 2 3 4 5..
	acount++;	// always 1 & extinct
}

/* expectation
>> 0 0 
>> 1 0
>> 2 0
*/ 