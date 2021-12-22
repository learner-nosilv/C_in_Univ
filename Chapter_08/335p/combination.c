#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int num);
long combination(int n, int r);

int main(void) {
	int n, r;
	printf("C(n, r)\n");
	printf("정수n: _\b");
	scanf("%d", &n);
	printf("정수r: _\b");
	scanf("%d", &r);

	printf("C(%d, %d) = %ld\n", n, r, combination(n, r));
	return 0;
}

long combination(int n, int r) {
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}

long factorial(int num) {
	long result = 1;
	for (; num > 1; num--)
		result *= num;

	return result;
}