#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	do {
		printf("���ڸ� �Է��Ͻÿ�: ");
		char str = getchar();
	}while(65str)

	switch (str) {		// ���ĺ� �ڸ� ���п� ���� �ڼ��� ���� ����δ� �ɷ�
		case ('A'): case ('E'): case ('I'): case ('O'): case ('U'):
		case ('a'): case ('e'): case ('i'): case ('o'): case ('u'):
			printf("�����Դϴ�\n");	break;
		default:
			printf("�����Դϴ�\n");	break;
	}
	return 0;
}
