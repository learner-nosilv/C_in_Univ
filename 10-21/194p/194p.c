#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// condition.c

	int x, y;

	printf("first >> _\b");
	scanf("%d", &x);

	printf("Second >> _\b");
	scanf("%d", &y);

	printf("Bigger >> %d\n", (x > y ? x : y));
	printf("Smaller >> %d\n", (x < y ? x : y));

	// Even-Odd
	printf("Even-Odd? >> _\b");
	scanf("%d", &x);
	printf("Even-Odd? >> %s", (x % 2 == 0) ? "Even" : "Odd");
	return 0;
}