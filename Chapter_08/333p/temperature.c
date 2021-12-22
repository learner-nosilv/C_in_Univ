#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_options(void);
double CtoF(double celsius);
double FtoC(double fahrenheit);

int main(void) {
	char option;
	double celsius, fahrenheit;

	while (1) {
		option = 0;				// 초기화
		celsius = fahrenheit = 0;	// 초기화
		show_options();
		printf("Which option? _\b");
		scanf(" %c", &option);
		switch (option) {
			case('Q'):
			case('q'):
				goto quit;

			case('C'):
			case('c'):
				printf("Celsius? _\b");
				scanf("%lf", &celsius);
				fahrenheit = CtoF(celsius);
				printf("Fahrenheit: %lf ℉\n\n", fahrenheit);
				break;

			case('F'):
			case('f'):
				printf("Fahrenheit? _\b");
				scanf("%lf", &fahrenheit);
				celsius = FtoC(fahrenheit);
				printf("Celsius: %lf ℃\n\n", celsius);
				break;

			default:
				printf("** Something Wrong **\n\n");
				break;
		}
	}
	quit:
	return 0;
}

void show_options(void) {
	printf("--------------------------------\n");
	printf("<<Celsius Fahrenheit Converter>>\n");
	printf("[C, c] celsius → fahrenheit\n");
	printf("[F, f] fahrenheit → celsius\n");
	printf("[Q, q] QUIT\n");
	printf("↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓\n");
}

double CtoF(double celsius) {
	return (9.0 / 5.0 * celsius + 32.0);
}

double FtoC(double fahrenheit) {
	return ((fahrenheit - 32.0) * 5.0 / 9.0);
}