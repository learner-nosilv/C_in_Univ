#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void) {
	srand((unsigned) time(NULL));
	char keep;
	printf("Ȧ¦���� <�����Ϸ��� �ƹ�Ű�� ��������>\n");
	_getch();
	do {
		int answer = b_rand();
		int user;

		printf("�� ��? ��? (���̸� 1, �ڸ� 0�Է�):  _\b");
		scanf("%d", &user);
		for (int i = 0; i < 3; i++) {
			printf(". ");
			Sleep(300);
		}
		if (user == answer)
			printf("����!\n");
		else
			printf("��!\n");

		printf("����Ͻðڽ��ϱ�? (�ߴ��� ���ҽ� n�� �Է����ּ���)\n");
		keep=_getch();
		printf("--------------------\n");
	} while (keep!='n');

	return 0;
}

int b_rand(void) {
	return (rand() % 2);
}