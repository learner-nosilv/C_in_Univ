#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, r, result=1;
	printf("[nPr ���� ����]\n");
	printf("n: _\b");
	scanf("%d", &n);
	printf("r: _\b");
	scanf("%d", &r);

	for (int i = n; i > n - r; i--)
		result *= i;
	
	printf("���: %d\n", result);
	return 0;
}