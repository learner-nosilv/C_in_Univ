#include <stdio.h>

int main(void)
{
	int x, y;

	x = 1;
	printf("x+1 >> %d\n", x + 1);		// return 2(x=1)
	printf("x >> %d\n", x);
	printf("y = x+1 >> %d\n", y = x + 1);	// return 2(y=2)
	printf("x >> %d\n", x);
	printf("y = 10+(x=2+7) >> %d\n", y = 10 + (x = 2 + 7));	// return 19(x=9 y=19)
	printf("x >> %d\n", x);
	printf("y=x=3 >> %d\n", y = x = 3);	// return 3(x=3 y=3)
	printf("x >> %d\n", x);

	return 0;
}