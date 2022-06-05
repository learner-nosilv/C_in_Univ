#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double f_abs(double x);
double f_min(double x, double y);
int f_equal(double x, double y);

int main(void) {
	double x, y;
	printf("�� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	if (f_equal(x, y))
		printf("�� �Ǽ��� ���� ����\n");
	else
		printf("�� �Ǽ��� ���� �ٸ�\n");

	return 0;
}

double f_abs(double x) {
	return (x > 0 ? x : -x);
}

double f_min(double x, double y) {
	return (x < y ? x : y);
}

int f_equal(double x, double y) {
	if ((f_abs(x - y) / f_min(f_abs(x), f_abs(y))) < 0.000001)
		return 1;
	return 0;
}