#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month, days;
	printf("month >> ");
	scanf("%d", &month);

	if (1 > month || month > 12) printf("WRONG MONTH\n");
	else {
		switch (month) {
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		printf("%d : %ddays\n", month, days);
	}

	// 250. LAB
	int x, y;
	char op;
	printf(" + - * / % & | ^ Expression (NO spacebar) >> ");
	scanf("%d%c%d", &x, &op, &y);

	switch (op){
	case '+': printf("%d %c %d = %d\n", x, op, y, x + y); break;
	case '-': printf("%d %c %d = %d\n", x, op, y, x-y); break;
	case '*': printf("%d %c %d = %d\n", x, op, y, x*y); break;
	case '/': printf("%d %c %d = %lf\n", x, op, y, (double)x/y); break;
	case '%': printf("%d %c %d = %d\n", x, op, y, x%y); break;
	case '&': printf("%04x %c %04x = %04x\n", x, op, y, x&y); break;
	case '|': printf("%04x %c %04x = %04x\n", x, op, y, x|y); break;
	case '^': printf("%04x %c %04x = %04x\n", x, op, y, x^y); break;
	default: printf("ERROR\n"); break;
	}

	return 0;
}