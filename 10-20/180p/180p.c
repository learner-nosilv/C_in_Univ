#define _CRT_SECURE_NO_WARNINGS	// WHY can't I memorize it?
#include <stdio.h>

int main(void)
{
	// LAB. give me change
	int price, user;
	int c_5000, c_1000, c_500, c_100;

	printf("The price is \\ __\b\b");
	scanf("%d", &price);
	printf("User paid \\ __\b\b");
	scanf("%d", &user);

	user -= price;	// Total change, I except negative case
	c_5000 = user / 5000;
	user %= 5000;
	c_1000 = user / 1000;
	user %= 1000;
	c_500 = user / 500;
	user %= 500;
	c_100 = user / 100;
	user %= 100;	// I exclude problem's condition; units of 100

	printf("Change is \\5000: %d　\\1000: %d　\\500: %d　\\100: %d　 rest: %d\n", c_5000, c_1000, c_500, c_100, user);

	return 0;
}