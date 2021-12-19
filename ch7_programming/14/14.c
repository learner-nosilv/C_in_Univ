#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, temp, i=1;

	printf("정수를 입력하시오: _\b");
	scanf("%d", &num);

	do {
		printf("%d", (num / i)%10);
		i *= 10;
	} while (num / i != 0);
	printf("\n");
	return 0;
}