#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����1. * ��ȣ�� �簢��
int main(void) {
	int x, y;

	printf("���Ρ� X ���Ρ� ? ");
	scanf("%d %d", &x, &y);

	printf("[RECTANGLE %d X %d]\n", x, y);
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}