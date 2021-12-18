#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int prime = 2; prime <= 100; prime++) {
		for (int check = 2; check < prime; check++) {
			if (prime % check == 0) break;	// 중간에 약수가 발견되면, 해당 숫자의 검사를 마침
			if(check == prime-1) printf("%d ", prime);	// 모든 검사루프를 무사히 마치면, 해당 숫자는 소수
		}
	}
	return 0;
}
// 이게 최선인가?


// ↓↓↓ 홀수해답집에 수록된 해답: goto사용 ↓↓↓
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) goto A;
		}
		printf("%d ", i);
	A:;
	}
	printf("\n");
	return 0;
}