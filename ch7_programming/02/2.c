#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int result = 0;
	for (int i = 3; i <= 100; i += 3) result += i;
	printf("Result >> %d\n", result);

	return 0;
}