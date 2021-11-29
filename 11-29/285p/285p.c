#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// for.c print 5times
	int i;
	for (i = 0; i < 5; i++) printf("Hello World!\n");
	// 0, 1, 2, 3, 4

	// sum_for.c sum 1~10
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1~10 Á¤¼ö ÇÕ : %d\n", sum);
	printf("TEST: %d\n", 10 * 11 / 2);

	return 0;
}