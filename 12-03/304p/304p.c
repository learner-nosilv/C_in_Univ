#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int a, b, oper, result, answer;
	int right = 0;

	printf("---[���� �ڸ� ��Ģ���� 10����]---\n");
	printf("**�������� ��� '����'�� ���� ������ �������ּ���.**\n\n");
	srand(time(NULL));
	for (int i = 1; i <= 10; i++) {
		a = rand()%9+1;
		b = rand()%9+1;
		oper = rand() % 4;
		printf("[%d] %d", i, a);
		switch (oper) {
			case 0:
				printf(" + ");
				result = a + b;
				break;
			case 1:
				printf(" - ");
				result = a - b;
				break;
			case 2:
				printf(" �� ");
				result = a * b;
				break;
			case 3:
				printf(" �� ");
				result = a / b;
				break;
		}
		printf("%d = ", b);
		scanf(" %d", &answer);	// ignore whitespace
		if (answer == result) {
			printf("�¾ҽ��ϴ�.\n\n");
			right++;
		}
		else printf("Ʋ�Ƚ��ϴ�.\n\n");
	}
	printf("[���] %d / 10\n", right);
	return 0;
}