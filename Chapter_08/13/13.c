#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m);

int main(void) {
	int n, m;
	printf("���� ���� ����ϱ�?\n");
	printf("�߰� ���� �Է��ϼ���: ");
	scanf("%d %d", &n, &m);

	if (is_multiple(n, m))
		printf("%d�� %d�� ����Դϴ�.  �� %d = %d �� %d\n", n, m, n, m, n / m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.\n", n, m);

	return 0;
}
int is_multiple(int n, int m) {
	if (n % m)
		return 0;
	else
		return 1;
}