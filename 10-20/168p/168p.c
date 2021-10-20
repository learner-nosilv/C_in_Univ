#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 01. print real number > 1. point 2. power
	double real;

	printf("real number >>____\b\b\b\b");
	scanf("%lf", &real);

	printf("use %%lf: %lf\n", real);
	printf("use %%le: %le\n", real);


	// 02. hexa → octa deci hexa
	int num1;
	printf("hexa >>__\b\b");
	scanf("%x", &num1);

	printf("octa >> %0#4o\n", num1);		// #:8진수 0표식
	printf("deci >> %04d\n", num1);
	printf("hexa >> %0#4x\n", num1);		// #:16진수 0x표식


	// 03. swap
	num1 = 10;
	int num2 = 20;
	int temp = num1;

	printf("NOW: %d\t%d\n", num1, num2);

	num1 = num2;
	num2 = temp;
	printf("SWP: %d\t%d\n", num1, num2);


	// 04. volume of a box
	double length, wide, height, volume;
	printf("wide length height >>");
	scanf("%lf %lf %lf", &wide, &length, &height);
	volume = length * wide * height;
	printf("volume >> %lf\n", volume);


	// 05. korean pyeong > square meter
	const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong, sqmeter;

	printf("pyeong >> ");
	scanf("%lf", &pyeong);
	sqmeter = pyeong * SQMETER_PER_PYEONG;
	printf("sqmeter >> %lf\n", sqmeter);


	// 06. calculate it
	float a = 3.32e-3;
	float b = 9.76e-8;
	printf("%f\n", a + b);


	// 07. Kinetic Energy
	double mass, speed, energy;
	printf("mass(kg): ");
	scanf("%lf", &mass);
	printf("speed(m/s): ");
	scanf("%lf", &speed);
	energy = 0.5 * mass * speed * speed;
	printf("energy(J): %lf\n", energy);


	// 08. int > ascii
	int int_ascii;
	printf("ascii code >> ");
	scanf("%d", &int_ascii);
	printf("ascii char >> %c\n", int_ascii);


	// 09. int > ascii (2)
	int_ascii = 'a';
	printf("%c %c %c\n", int_ascii + 1, int_ascii + 2, int_ascii + 3);


	// 10. alarm and alarm
	printf("\a\n");
	printf("fire exprosion\n");
	printf("\a\n");


	// 11. print it
	printf("\"ASCII code\"\, \'A\'\, \'B\'\, \'C\'\n\\t \\a \\n\n");
	return 0;
}