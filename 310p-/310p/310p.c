#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count;
	long double pi = 3;

	printf("�ݺ�Ƚ��: ");
	scanf("%d", &count);
	count--;		// pi = 3, Already 1st loop
	
	for (int i = 0; i < count; i++) {
		pi += (i%2==1?-1:1) * (long double)1 / ((i + 1) * (i + 2) * (2 * i + 3));
		int interim_100units_check = (((i + 1) % 100) == 0) && ((i + 1) != count);		// �߰�ó������ ������� �˸�
		if (interim_100units_check) printf("[%d��°���] PI = %.50llf\n", (i + 1), pi);
	}

	printf("�� �ݺ� %dȸ, PI = %.50llf\n", count + 1, pi);

	return 0;
}