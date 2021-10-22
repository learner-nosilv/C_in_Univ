/*
relational operator
*/ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Type 2 integer >> ");
	scanf("%d %d", &x, &y);

	printf("x == y >> %d\n", x == y);
	printf("x != y >> %d\n", x != y);
	printf("x > y >> %d\n", x > y);
	printf("x < y >> %d\n", x < y);
	printf("x >= y >> %d\n", x >= y);
	printf("x <= y >> %d\n", x <= y);
	// be careful for the order <=(o) =<(x)

	// be careful for comparing with the real number
	printf("1e32 + 0.01 > 1e32 >> %d\n", 1e32 + 0.01 > 1e32);
	printf("1e32 + 0.01 > 1e32 >> %d\n", fabs((1e32 + 0.01)-1e32)>0);

	/* fabs()
	* Func: convert Floating point number to ABSolute value.
	* Def : double fabs(double x)
	*/

	return 0;
}