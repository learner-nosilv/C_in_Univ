#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// leapyear
	int year, bool1, bool2, result;
	char reason = 'X';

	printf("year? _\b");
	scanf("%d", &year);

	bool1 = (year % 400) == 0;
	bool2 = (year % 4 == 0) && (year % 100 != 0);
	result = bool1 || bool2;

	if (bool2 == 1) reason = 'B';
	if (bool1 == 1) reason = 'A';

	printf("leapyear >> %d(%c)\n", result, reason);


	// even-odd year
	result = (year % 2 == 0);
	printf("Even-Odd >> %d\n", result);

	return 0;
}