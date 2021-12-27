#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void display_menu(void);
double get_double(void);
char get_char(void);
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
float get_area(radius, pi) {
	return radius * radius * pi;
}

int main(void) {
	printf("%lf", get_area(1, 2));
	double y, x=1, a=1;
//	y = log10(x) + exp(x);
	y = sin(x) + sqrt(x * x - 2 * a) + ldexp(1.0, 10);
	printf("%lf %lf\n", ldexp(1, 10), pow(2, 10));
//	x = pow(2, 10);
	while (1) {
		double a, b, result;
		char operator;

		display_menu();
		a = get_double();
		operator = get_char();
		if (operator != '+' && operator != '-' && operator != '*' && operator != '/') break;
		b = get_double();
		switch (operator) {
			case'+':
				result = add(a, b);
				break;
			case'-':
				result = sub(a, b);
				break;
			case'*':
				result = mul(a, b);
				break;
			case'/':
				result = div(a, b);
				break;
			default:
				break;
		}
		printf("%lf %c %lf = %lf\n\n", a, operator, b, result);
	}
	return 0;
}

void display_menu(void) {
	printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛 [Double Calculator] 弛\n");
	printf("弛 式式式式式式式式式式式式式式式式式式式 弛\n");
	printf("弛﹛ +﹛﹛-﹛﹛*﹛﹛/﹛弛\n");
	printf("弛 式式式式式式式式式式式式式式式式式式式 弛\n");
	printf("弛﹛etc﹛⊥﹛QUIT﹛﹛﹛弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	return;
}

double get_double(void) {
	double real;
	printf("real number: ");
	scanf(" %lf", &real);
	return real;
}

char get_char(void) {
	char character;
	printf("character: ");
	scanf(" %c", &character);
	return character;
}

double add(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double mul(double a, double b) {
	return a * b;
}

double div(double a, double b) {
	return a / b;
}