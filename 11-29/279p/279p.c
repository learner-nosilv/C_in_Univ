#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// sentinel = 0
	int num, sum=0;

	do {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &num);
		sum += num;
	} while (num);	// num = 0�̸� �ߴ�

	printf("���ڵ��� �� = %d\n", sum);

	int i = 0;
	do
	{
		printf("1---NEW\n");
		printf("2---OPEN\n");
		printf("3---CLOSE\n");
		printf("�ϳ��� �����Ͻÿ�: _\b");
		scanf("%d", &i);

	} while (i != 1 && i != 2 && i != 3);

	printf("���õ� �޴�=%d\n",i);
	return 0;
}