#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f);

int main(void) {
	double f;
	printf("�Ǽ�: _\b");
	scanf("%lf", &f);

	printf("�ݿø�: %d\n", round(f));
	return 0;
}

int round(double f) {
	if (f >= 0)
		return ((int)(f + 0.5));
	else
		return ((int)(f - 0.5));
}