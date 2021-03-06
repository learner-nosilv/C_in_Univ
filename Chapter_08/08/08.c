#define _USE_MATH_DEFINES		// math.h의 M_PI(파이값)를 사용하기위함
#include <stdio.h>
#include <math.h>

double sin_degree(double degree);

int main(void) {
	for (double degree = 0; degree <= 180; degree += 10)
		printf("sin(%.0lf˚)=	%lf\n", degree, sin_degree(degree));
	return 0;
}

double sin_degree(double degree) {
	return sin(degree*M_PI/180);
}

/*
// Definitions of useful mathematical constants
//
// Define _USE_MATH_DEFINES before including <math.h> to expose these macro
// definitions for common math constants.  These are placed under an #ifdef
// since these commonly-defined names are not part of the C or C++ standards
* #define M_E        2.71828182845904523536   // e
* #define M_LOG2E    1.44269504088896340736   // log2(e)
* #define M_LOG10E   0.434294481903251827651  // log10(e)
* #define M_LN2      0.693147180559945309417  // ln(2)
* #define M_LN10     2.30258509299404568402   // ln(10)
* #define M_PI       3.14159265358979323846   // pi
* #define M_PI_2     1.57079632679489661923   // pi/2
* #define M_PI_4     0.785398163397448309616  // pi/4
* #define M_1_PI     0.318309886183790671538  // 1/pi
* #define M_2_PI     0.636619772367581343076  // 2/pi
* #define M_2_SQRTPI 1.12837916709551257390   // 2/sqrt(pi)
* #define M_SQRT2    1.41421356237309504880   // sqrt(2)
* #define M_SQRT1_2  0.707106781186547524401  // 1/sqrt(2)
*/