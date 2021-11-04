#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 220p. if2.c -> get absolute
	int number;

	printf("int >> ");
	scanf("%d", &number);

	if (number < 0) number *= -1;

	printf("abs >> %d\n", number);


	// 234p. if_else1.c -> odd & even
	printf("OnE >> ");
	if (number % 2) printf("ODD\n");
	else printf("EVEN\n");


	// 235p. if_else2.c -> a/0
	int n, d; // numerator denominator
	printf("бс/бр >> ");
	scanf("%d", &n);
	printf("бр/бс >> ");
	scanf("%d", &d);

	if (!d) printf("**THE DENOMINATOR CANNOT BE ZERO**\n");
	else printf("%d/%d >> %lf\n", n, d, (double)n / d);

	
	// 236p. leap_year.c
	int year;
	printf("year >> ");
	scanf("%d", &year);

	if ((!(year % 4) && (year % 100)) || !(year%400) ) printf("%d is leap year!\n", year);
	else printf("%d is NOT leap year!\n", year);


	// 239p. grade.c -> decide a grade
	int score;
	printf("score >> ");
	scanf("%d", &score);
	printf("grade >> ");
	if (score >= 90) printf("A");
	else if (score >= 80) printf("B");
	else if (score >= 70) printf("C");
	else if (score >= 60) printf("D");
	else printf("F");
	printf("\n");

	return 0;
}