#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num);

int main(void) {
	int num;
	printf("[ Is it 'Prime'? ]\n");
	printf("Range: 1 ~ _\b");
	scanf("%d", &num);
	printf("Prime list: ");

	for (int n = 2; n <= num; n++) {
		if (is_prime(n))
			printf("%d ", n);
	}
	printf("- END\n");
	return 0;
}

int is_prime(int num) {
//	if (num == 1) return 0;			// �Ҽ� ���� 1) 1���� ū �ڿ���
	for (int i = 2; i < num; i++)	// �Ҽ� ���� 2) 1�� �ڱ��ڽ�����'��' �������� �ڿ���
		if (num % i == 0) return 0;
	return 1;
}