#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned char number, i , mask;		// 1byte = 8bit____ ____
	mask = 1 << 7;		// 0000 0001 ¡æ 1000 0000

	printf("Decimal(¡Â 255) >> _\b");	// ____ ____
	scanf("%hhu", &number);		// using char to 1byte integer

	printf("Binary >> ");
	for (i = 0; i < 8; i++)
	{
		printf("%d", (number & mask) == 0 ? 0 : 1);
		mask = mask >> 1;
	}

	return 0;
}