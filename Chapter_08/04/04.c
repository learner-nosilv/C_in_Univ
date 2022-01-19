#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year);

int main(void) {
	int year;
	printf("year: ____\b\b\b\b");
	scanf("%d", &year);

	if (is_leap(year))
		printf("%d년은 윤년으로 366일입니다.\n", year);
	else
		printf("%d년은 평년으로 365일입니다.\n", year);

	return 0;
}

int is_leap(int year) {
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}