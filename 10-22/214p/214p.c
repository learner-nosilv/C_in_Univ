#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double f_temp, c_temp;

	printf("f >> _\b");
	scanf("%lf", &f_temp);

	c_temp = 5.0 / 9 * (f_temp - 32);
	printf("c >> %lf\n", c_temp);

	int x = 5;
	printf("%d\n", x++ * x++);
	printf("%d\n", x);

	int a = 10;
	int b = 20;
//	int c = ((a > b) ? (a : b));

	return 0;
}