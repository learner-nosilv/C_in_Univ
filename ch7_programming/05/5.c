#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	printf("������ �Է��Ͻÿ�: _\b");
	scanf("%d", &num);

	for (int j = 1; j <= num; j++) {	// '��ü ��'�̸鼭, '�� �ٴ� ������ ����' ����
		for (int i = 1; i <= j; i++)
			printf("%d ", i);
		printf("\n");
	}

	return 0;
}