#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int length = 10;

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= length - i; j++) printf(" ");
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	return 0;
}