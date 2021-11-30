#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 예제1. * 기호를 사각형
int main(void) {
	int x, y;

	printf("가로□ X 세로□ ? ");
	scanf("%d %d", &x, &y);

	printf("[RECTANGLE %d X %d]\n", x, y);
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}