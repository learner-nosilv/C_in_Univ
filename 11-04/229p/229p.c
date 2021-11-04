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

	return 0;
}