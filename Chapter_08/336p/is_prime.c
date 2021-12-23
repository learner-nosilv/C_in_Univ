#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num);

int main(void) {
	int num;
	printf("[ Is it 'Prime'? ]\n");
	printf("Range: 1 ~ _\b");
	scanf("%d", &num);
	printf("Prime list: ");

	for (int n = 2; n <= num; n++) {
		if (is_prime(n))
			printf("%d ", n);
	}
	printf("- END\n");
	return 0;
}

int is_prime(int num) {
//	if (num == 1) return 0;			// 소수 정의 1) 1보다 큰 자연수
	for (int i = 2; i < num; i++)	// 소수 정의 2) 1과 자기자신으로'만' 나눠지는 자연수
		if (num % i == 0) return 0;
	return 1;
}