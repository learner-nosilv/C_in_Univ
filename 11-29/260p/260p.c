#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, y;
	int quardrant;
	printf("��ǥ(x, y): ");
	scanf("%lf %lf", &x, &y);

	if (x * y == 0) quardrant = 0;
	else if (x > 0 && y > 0) quardrant = 1;
	else if (x < 0 && y < 0) quardrant = 3;
	else if (x > 0) quardrant = 4;
	else if (y > 0) quardrant = 2;
	else printf("ERROR\n");

	if (quardrant) printf("%d��и�\n", quardrant);
	else printf("�� ���� �ֽ��ϴ�.\n");

	return 0;
}