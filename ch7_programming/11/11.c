#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, result=0, check;
	printf("n�� ���� �Է��Ͻÿ�: _\b");
	scanf("%d", &n);

	check = n * (n + 1) * (2 * n + 1) / 6;
	for (int i = 1; i <= n; i++)
		result += (i * i);
	printf("��갪�� %d�Դϴ�.\n", result);
	printf("�˻갪�� %d�Դϴ�.\n", check);
	return 0;
}