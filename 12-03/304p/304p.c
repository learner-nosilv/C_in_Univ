#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int a, b, oper, result, answer;
	int right = 0;

	printf("---[일의 자리 사칙연산 10문제]---\n");
	printf("**나눗셈의 경우 '버림'을 통해 정수로 응답해주세요.**\n\n");
	srand(time(NULL));
	for (int i = 1; i <= 10; i++) {
		a = rand()%9+1;
		b = rand()%9+1;
		oper = rand() % 4;
		printf("[%d] %d", i, a);
		switch (oper) {
			case 0:
				printf(" + ");
				result = a + b;
				break;
			case 1:
				printf(" - ");
				result = a - b;
				break;
			case 2:
				printf(" × ");
				result = a * b;
				break;
			case 3:
				printf(" ÷ ");
				result = a / b;
				break;
		}
		printf("%d = ", b);
		scanf(" %d", &answer);	// ignore whitespace
		if (answer == result) {
			printf("맞았습니다.\n\n");
			right++;
		}
		else printf("틀렸습니다.\n\n");
	}
	printf("[결과] %d / 10\n", right);
	return 0;
}