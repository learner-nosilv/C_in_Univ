#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int n);

int main(void) {
	printf("[���� �׷��� ������]\n");
	int n;
	do {
		printf("�ʺ��� �Է��Ͻÿ�(���� �Է½� ����): _\b");
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