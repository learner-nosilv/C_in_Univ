#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void);

int main(void) {
	return 0;
}

int get_integer(void) {
	int integer;
	printf("�����Է�: _\b");
	scanf(" %d", &integer);
	return integer;
}