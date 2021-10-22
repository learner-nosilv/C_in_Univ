#include <stdio.h>

int main(void)
{
	char data = 'a';	// 0110 0001 (97)
	char key = 0xff;	// 1111 1111 (255)
	char encrpted_data = data ^ key;

	unsigned char number, i, mask;		// 1byte = 8bit____ ____
	mask = 1 << 7;		// 0000 0001 ¡æ 1000 0000

	printf("Data Char >> \t\t%c\n", data);
	number = (unsigned char)data;
	printf("Data Binary >> \t\t");
	for (i = 0; i < 8; i++)
	{
		printf("%d", (number & mask) == 0 ? 0 : 1);
		mask = mask >> 1;
	}
	printf("\n");

	printf("Key Char >> \t\t%c\n", key);
	mask = 1 << 7;		// 0000 0001 ¡æ 1000 0000
	number = (unsigned char)key;
	printf("Key Binary >> \t\t");
	for (i = 0; i < 8; i++)
	{
		printf("%d", (number & mask) == 0 ? 0 : 1);
		mask = mask >> 1;
	}
	printf("\n");

	printf("Encrpted Char >> \t%c\n", encrpted_data);
	mask = 1 << 7;		// 0000 0001 ¡æ 1000 0000
	number = (unsigned char)encrpted_data;
	printf("Encrpted Binary >> \t");
	for (i = 0; i < 8; i++)
	{
		printf("%d", (number & mask) == 0 ? 0 : 1);
		mask = mask >> 1;
	}
	printf("\n");

	printf("Key Char >> \t\t%c\n", key);
	mask = 1 << 7;		// 0000 0001 ¡æ 1000 0000
	number = (unsigned char)key;
	printf("Key Binary >> \t\t");
	for (i = 0; i < 8; i++)
	{
		printf("%d", (number & mask) == 0 ? 0 : 1);
		mask = mask >> 1;
	}
	printf("\n");

	char orig_data = encrpted_data ^ key;
	printf("Orig Char >> \t\t%c\n", orig_data);
	mask = 1 << 7;		// 0000 0001 ¡æ 1000 0000
	number = (unsigned char)orig_data;
	printf("Orig Binary >> \t\t");
	for (i = 0; i < 8; i++)
	{
		printf("%d", (number & mask) == 0 ? 0 : 1);
		mask = mask >> 1;
	}
	printf("\n");

	return 0;
}