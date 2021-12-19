#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, result=0, check;
	printf("n의 값을 입력하시오: _\b");
	scanf("%d", &n);

	check = n * (n + 1) * (2 * n + 1) / 6;
	for (int i = 1; i <= n; i++)
		result += (i * i);
	printf("계산값은 %d입니다.\n", result);
	printf("검산값은 %d입니다.\n", check);
	return 0;
}