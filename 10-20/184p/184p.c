#include <stdio.h>

int main(void)
{
	int x = 10, y = 10, z = 33;

	x += 1;			// 11, x = x + 1
	y *= 2;			// 20, y = y * 2
	z %= 10 + 20;	// 3 , z = z % (10+20)

	printf("%d %d %d\n", x, y, z);


	// left side must be variable!
	return 0;
}