#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;

	printf("[�� �� �빮�� �ڵ���ȯ��]\n");
	printf("\t\t\t* 'Q' �Է½� ����˴ϴ�.\n\n");
	while (1) {
		printf("�ҹ��� �Է�: ");
		scanf("%c", &letter);
		if (letter == 'Q')
			break;
		else if ('a' <= letter && letter <= 'z') {
			printf("%c �� %c\n", letter, letter - 32);
			continue;
		}
		else {
			printf("**'�ҹ���'�� �Էº�Ź�帳�ϴ�.**\n\n");
			continue;
		}
	}
	return 0;
}