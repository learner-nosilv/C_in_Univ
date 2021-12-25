#include <stdio.h>
#include <math.h>
//#define PI 3.1415926535

int main(void) {
	double result, value = 1.6;
	printf("Value: %lf\n", value);
	result = floor(value);	// expected: 1
	printf("Floor: %.0lf\n", result);
	result = ceil(value);	// expected: 2
	printf("Ceil: %.0lf\n", result);

	value = -12.1;
	printf("Value: %.1lf\n", value);
	printf("fabs(v): %.1lf\n", fabs(value));
	printf("fabs(-v): %.1lf\n", fabs(-value));

	value = 4;
	printf("Value: %.1lf\n", value);
	printf("pow(v, 5): %.1lf\n", pow(value, 5));	// expected: 1024
	printf("sqrt(v): %.1lf\n", sqrt(value));		// expected: 2

	const double PI = 3.1415926535;
	double x, y;
	x = PI;
	printf("x = %lf\n", x);
	y = sin(x);	// sin(180━)=0
	printf("sin(%lf)=%lf\n", x, y);
	y = cos(x);	// cos(180━)=-1
	printf("cos(%lf)=%lf\n", x, y);
	y = tan(x);	// tan(180━)=0
	printf("tan(%lf)=%lf\n", x, y);
	y = sin(x/4);	// sin(45━)=(root2)/2
	printf("sin(%lf)=%lf\n", x/4, y);
	printf("%lf", sqrt(2) / 2);
	return 0;
}