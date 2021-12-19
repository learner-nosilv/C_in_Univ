#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;			// ∑ k (k=1~n)
	int result = 0;		// 결과저장
	int check;			// 검산용

	while (result < 10000) {
		n++;
		result += n;
	}
	result -= n;
	n--;

	printf("1부터 %d까지의 합: %d\n", n, result);
	check = n * (n + 1) / 2;
	printf("검산용 출력: %d\n", check);

	return 0;
}