#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char shape;
	printf("���ڸ� �Է��Ͻÿ�: ");
	shape = getchar();

	switch (shape) {
		case('R'):
		case('r'):
			printf("Rectangle\n");
			break;
		case('T'):
		case('t'):
			printf("Triangle\n");
			break;
		case('C'):
		case('c'):
			printf("Circle\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	return 0;
}