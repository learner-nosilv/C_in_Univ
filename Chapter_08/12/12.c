#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n);

int main(void) {
	printf("[막대 그래프 생성기]\n");
	int n;
	do {
		printf("너비값을 입력하시오(음수 입력시 종료): _\b");
		scanf("%d", &n);
		print_value(n);
	} while (n>=0);
	return 0;
}

void print_value(int n) {
	for (; n > 0; n--)
		printf("*");
	printf("\n");
}