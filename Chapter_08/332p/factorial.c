#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void) {
	int n, result;

	printf("[Factorial n!] n? _\b");
	scanf("%d", &n);
	result = factorial(n);
	printf("%d! = %d\n", n, result);

	return 0;
}

int factorial(int n) {
	int result = 1;

	for (; n > 1; n--)
		result *= n;

	return result;
}