#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("���ڸ� �Է��Ͻÿ�: ");
	int str = getchar();

	switch (str) {		// ���ĺ� �ڸ� ���п� ���� �ڼ��� ���� ����δ� �ɷ�
		case ('A'):
		case ('E'):
		case ('I'):
		case ('O'):
		case ('U'):
		case ('a'):
		case ('e'):
		case ('i'):
		case ('o'):
		case ('u'):
			printf("�����Դϴ�\n");
		default:
			printf("�����Դϴ�\n");
	}
	return 0;
}
