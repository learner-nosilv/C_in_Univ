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
	printf("1~10 ���� �� : %d\n", sum);
	printf("TEST: %d\n", 10 * 11 / 2);

	// cubing.c ������= cubing
	
	printf("1���� ���� '��'������ ���������� ���� �ͳ���? ");
	int n;
	scanf("%d", &n);
	printf("===================\n");
	printf("   i	i�� ������\n");
	printf("===================\n");

	for (i = 1; i <= n; i++) printf("%4d	%5d\n", i, i * i * i);
	
	//
	return 0;
}