#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int, int);

int main(void) {
	int x, y;
	printf("---[������]---\n");
	printf("���ϰ� ���� �� ����: ");
	scanf("%d %d", &x, &y);
	printf("�� ū ���� %d�Դϴ�.\n", max(x, y));
	return 0;
}
int max(int a, int b) {
	a = (a > b ? a : b);
	return a;
}