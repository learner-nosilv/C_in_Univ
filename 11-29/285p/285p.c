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
	printf("1~10 정수 합 : %d\n", sum);
	printf("TEST: %d\n", 10 * 11 / 2);

	// cubing.c 세제곱= cubing
	printf("1부터 정수 '몇'까지의 세제곱값을 보고 싶나요? ");
	int n;
	scanf("%d", &n);
	printf("===================\n");
	printf("   i	i의 세제곱\n");
	printf("===================\n");

	for (i = 1; i <= n; i++) printf("%4d	%5d\n", i, i * i * i);
	
	// draw_box.c
	int w, h;		// 가로 높이
	int j;
	printf("[직사각형 맨들기] 가로 ?*(2칸이상) 세로 ?*(3줄이상) : ");
	scanf("%d %d", &w, &h);
	for (i = 0; i < w; i++) printf("* ");	// 첫 줄
	printf("\n");
	for (j = 0; j < (h - 2); j++) {
		printf("* ");	// 맨 앞
		for (i = 0; i < (w - 2); i++) printf("　");	// 가운데
		printf("*\n");	// 맨 뒤
	}
	for (i = 0; i < w; i++) printf("* ");	// 막 줄
	printf("\n");
	printf("[%d X %d]\n", w, h);

	// factorial.c
	long long fact = 1;
	printf("[Factorial] N ! : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) fact *= i;
	printf("%d! = %d\n", n, fact);

	return 0;
}