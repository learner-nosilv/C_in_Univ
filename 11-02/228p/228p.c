#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// if1.c	positive?
	int a;
	printf(">> _\b");
	scanf("%d", &a);

	if (a > 0) printf("positive\n");
	else printf("Not positive\n");
	printf("input : %d\n", a);

	// if2.c	absolute
	printf(">> _\b");
	scanf("%d", &a);

	if (a < 0) a = -a;
	printf("ABS >> %d\n", a);

	// if
	return 0;
}