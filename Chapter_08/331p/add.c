#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void);
int add(int a, int b);

int main(void) {
	printf("[더하기]\n");
	int x = get_integer();
	int y = get_integer();
	int result = add(x, y);
	printf("더한 결과: %d\n", result);

	return 0;
}

int add(int a, int b) {
	return (a + b);
}

int get_integer(void) {
	int integer;
	printf("정수입력: _\b");
	scanf(" %d", &integer);

	return integer;
}