#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double r, result = 1;	// r^n
	int n;

	printf("�Ǽ��� ���� �Է��Ͻÿ�(��): ");
	scanf("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�(����): ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		result *= r;

	printf("%lf�� %d�������: %lf\n", r, n, result);

	return 0;
}