#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_binary(int decimal);

int main(void) {
	int number;
	printf("10Áø¼ö: ");
	scanf("%d", &number);

	print_binary(number);

	return 0;
}

void print_binary(int decimal) {
	if (decimal > 0) {
		print_binary((int) decimal / 2);
		printf("%d ", decimal % 2);
	}
}
/*
if p_b(10)
if (10 > 0) -> p_b(5) if(5>0) -> p_b(2) if (2>0)->p_b(1) if(1>0)->p_b(0) out
0 1 0 1
10 5 2 1 0
*/
