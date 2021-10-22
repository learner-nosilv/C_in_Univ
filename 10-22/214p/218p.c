#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = -3, j = 2, k = 0, m;
	m = ++i && ++j && ++k;
	printf("%d %d %d %d\n", i, j, k, m);

	int x = 4, y, z;
	y = --x;
	z = x--;
	printf("%d %d %d\n", x, y, z);

	short a = 0x1111;
	printf("%hx\n", a & ~a);
	printf("%hx\n", a | ~a);
	printf("%hx\n", a ^ ~a);
	printf("%hx\n", a ^ 0xffff);

	a = 100;
	int b = 200, c;

	c = (a == 100 || b > 200);
	printf("%d\n", c);
	return 0;
}