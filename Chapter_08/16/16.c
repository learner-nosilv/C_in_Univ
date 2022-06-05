#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void) {
	int i;
	double result = 1;
	printf("[ 오일러의 수(자연상수) e ]\n");
	printf("몇 번째 항까지 계산할까요? _\b");
	scanf("%d", &i);

	for (; i > 0; i--) {		// i: 초기i값~1
		result += 1.0 / factorial(i);
	}
	printf("오일러의 수는 %lf입니다.\n", result);
	return 0;
}

int factorial(int n) {
	int result = 1;
	for (; n > 1; n--)
		result *= n;
	return result;
}