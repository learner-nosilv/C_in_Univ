#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double r, result = 1;	// r^n
	int n;

	printf("실수의 값을 입력하시오(밑): ");
	scanf("%lf", &r);
	printf("거듭제곱횟수를 입력하시오(지수): ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		result *= r;

	printf("%lf의 %d제곱결과: %lf\n", r, n, result);

	return 0;
}