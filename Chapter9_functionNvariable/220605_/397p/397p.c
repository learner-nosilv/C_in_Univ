#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n);

int main(void) {
	int n;
	printf("팩토리얼 계산기: ");
	scanf("%d", &n);

	printf("%d! = %ld\n", n, factorial(n));
	return 0;
}

long factorial(int n) {
	printf("%d!\n", n);
	if (n <= 1)
		return 1;		// n=0 일 때, n! = 1;
	else				// n>=1 일 때, n! = n * (n-1)!
		return n * factorial(n - 1);
}