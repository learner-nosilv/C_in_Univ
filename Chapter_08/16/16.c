#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void) {
	int i;
	double result = 1;
	printf("[ ���Ϸ��� ��(�ڿ����) e ]\n");
	printf("�� ��° �ױ��� ����ұ��? _\b");
	scanf("%d", &i);

	for (; i > 0; i--) {		// i: �ʱ�i��~1
		result += 1.0 / factorial(i);
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.\n", result);
	return 0;
}

int factorial(int n) {
	int result = 1;
	for (; n > 1; n--)
		result *= n;
	return result;
}