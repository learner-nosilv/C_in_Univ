#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year);

int main(void) {
	int year;
	printf("year: ____\b\b\b\b");
	scanf("%d", &year);

	if (is_leap(year))
		printf("%d���� �������� 366���Դϴ�.\n", year);
	else
		printf("%d���� ������� 365���Դϴ�.\n", year);

	return 0;
}

int is_leap(int year) {
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}