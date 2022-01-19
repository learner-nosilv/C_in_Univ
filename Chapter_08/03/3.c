#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);

int main(void) {
	double r;

	printf("RADIUS: _\b");
	scanf("%lf", &r);

	printf("AREA: %lf\n", cal_area(r));
	return 0;
}

double cal_area(double radius) {
	return radius * radius * PI;
}