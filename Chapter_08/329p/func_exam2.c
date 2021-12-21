#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void happy_birthday(int);

int main(void) {
	int count;
	printf("축하를 몇 번 할까요? _\b");
	scanf("%d", &count);
	happy_birthday(count);
	return 0;
}

void happy_birthday(int n) {
	for (; n > 0; n--)
		printf("생일축하 합니다!\n");
	return;
}