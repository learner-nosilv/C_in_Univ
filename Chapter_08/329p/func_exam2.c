#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void happy_birthday(int);

int main(void) {
	int count;
	printf("���ϸ� �� �� �ұ��? _\b");
	scanf("%d", &count);
	happy_birthday(count);
	return 0;
}

void happy_birthday(int n) {
	for (; n > 0; n--)
		printf("�������� �մϴ�!\n");
	return;
}