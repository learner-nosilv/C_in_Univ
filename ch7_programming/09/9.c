#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;			// �� k (k=1~n)
	int result = 0;		// �������
	int check;			// �˻��

	while (result < 10000) {
		n++;
		result += n;
	}
	result -= n;
	n--;

	printf("1���� %d������ ��: %d\n", n, result);
	check = n * (n + 1) / 2;
	printf("�˻�� ���: %d\n", check);

	return 0;
}