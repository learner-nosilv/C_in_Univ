#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, result;
	
	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	switch (x>0)
	{
		case 0:			// x �� 0
			result = (x * x) - (9 * x) + 2;
			break;
		case 1:			// x > 0
			result = (7 * x) + 2;
			break;
		default:
			printf("ERROR\n");
			break;
	}

	printf("f(x)�� ���� %lf\n", result);
	return 0;
}