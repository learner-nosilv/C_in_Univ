#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	// 240p. charclass.c -> classify
	printf("char >> ");
	char ch = getchar();
	if (ch >= 'A' && ch <= 'Z') printf("UPPER CASE\n");
	else if (ch >= 'a' && ch <= 'z') printf("lower case\n");
	else if (ch >= '0' && ch <= '9') printf("number 0~9\n");
	else printf("not char or number\n");

	// 1.
	int n = -1;

	if (n == 0)
		printf("A\n");
		else if (n > 3)
			printf("B\n");
		else
			printf("C\n");

	// 2.
	int size;
	printf("size >> ");
	scanf("%d", &size);

	if (0 < size && size < 100) printf("small\n");
	else if (100 <= size && size < 200) printf("medium\n");
	else if (200 <= size) printf("large\n");
	else printf("SIZE ERROR\n");

	// 241p. calc1.c
	char op;
	int x, y;

	printf("+ - * / & | ^ Expression (no spacebar) >> ");
	scanf("%d%c%d", &x, &op, &y);
	if (op == '+') printf("%d %c %d = %d\n", x, op, y, x + y);
	else if (op == '-') printf("%d %c %d = %d\n", x, op, y, x - y);
	else if (op == '*') printf("%d %c %d = %d\n", x, op, y, x * y);
	else if (op == '/') printf("%d %c %d = %lf\n", x, op, y, (double)x / y);
	else if (op == '&') printf("%04x %c %04x = %04x\n", x, op, y, x & y);
	else if (op == '|') printf("%04x %c %04x = %04x\n", x, op, y, x | y);
	else if (op == '^') printf("%04x %c %04x = %04x\n", x, op, y, x ^ y);
	else printf("Wrong Expression\n");


	// 242p. quad_eq.c
	int a, b, c;
	double d;
	printf("ax^2 + bx + c = 0\n");
	printf("a, b, c ? ");
	scanf("%d %d %d", &a, &b, &c);

	if (!a) printf("[linear equation]\n　x = %lf\n", -c / b);
	else {
		printf("[quadratic equation]\n");
		d = (b * b) - (4 * a * c);
		if (!d) printf("　D=0, x = %lf - multiple root\n", -(double)b / (2 * a));
		else if (d > 0) printf("　D>0, x = %lf, %lf\n", ((-b) + sqrt(d)) / (2 * a), ((-b) - sqrt(d)) / (2 * a));
		else if (d < 0) printf("　D<0, x = imaginary root\n");
		else printf("Something Error\n");
	}
		


	return 0;
}

