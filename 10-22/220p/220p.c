#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1. divide
	int x, y;
	printf("num1 ÷ num2 >>");
	scanf("%d %d", &x, &y);
	printf("result >> %d = %d * %d + %d\n", x, x / y, y, x % y);

	// 2. + - * /		notice. double - %lf
	double a, b;
	printf("num1, num2 >>");
	scanf("%lf %lf", &a, &b);
	printf("sum %lf, sub %lf, mul %lf, div %lf\n", a + b, a - b, a * b, a / b);

	// 3. Max
	int z;
	printf("num1, num2, num3 >> ");
	scanf("%d %d %d", &x, &y, &z);
	printf("MAX: %d\n", (x>y ? (x>z ? x : z) : (y>z ? y : z)));

	// 4. cm > in, ft
	const double CM_PER_IN = 2.54;
	const double IN_PER_FT = 12;

	double cm, ft, in;
	printf("cm >> ");
	scanf("%lf", &cm);
	in = cm / CM_PER_IN;
	ft = in / IN_PER_FT;
	printf("%lfft, %lfin\n", ft, in);
	// 책에 오타가 났네, 163 cm = 64.173228in = 5.347769ft임

	// 5. digit		* 자동형변환 이용
	printf("num >> ");
	scanf("%d", &x);
	printf("%d0 + %d\n", x / 10, x % 10);

	// 6. decimal > binary
	printf("num >> ");
	scanf("%d", &x);
	printf("%d\n", (~x)+1);

	// 7. power?
	printf("num * (2 ^ num2) >> ");
	scanf("%d %d", &x, &y);
	printf("%d * (2 ^ %d) = %d\n", x, y, x << y);

	// 8. volume, area of sphere
	double radius, volume, area;
	const double PI = 3.141592;
	printf("radius: ");
	scanf("%lf", &radius);
	area = 4 * PI * radius * radius;
	volume = 4 / 3.0 * PI * radius * radius * radius;
	printf("area: %lf, volume: %lf\n", area, volume);

	// 9. height ?
	double cane_height, cane_shade, pyramid_height, pyramid_shade;
	printf("cane_height, cane_shade, pyramid_shade? _ _ _\b\b\b\b\b");
	scanf("%lf %lf %lf", &cane_height, &cane_shade, &pyramid_shade);
	pyramid_height = cane_height / cane_shade * pyramid_shade;
	printf("pyramid_shade: %lf\n", pyramid_height);

	// 10. cartesian coordinate system, which quadrant is it ?
	printf("(x, y): ");
	scanf("%lf", &a);
	scanf("%lf", &b);
	printf(" >> ");
	(a == 0 && b == 0) ? printf("Line\n") : printf("");
	(a > 0 && b > 0) ? printf("1st quadrant\n") : printf("");
	(a < 0 && b > 0) ? printf("2nd quadrant\n") : printf("");
	(a < 0 && b < 0) ? printf("3rd quadrant\n") : printf("");
	(a > 0 && b < 0) ? printf("4th quadrant\n") : printf("");

	// 11. radius of earth
	double arc, angle, circumference_earth, radius_earth;
	printf("arc(km), angle(˚): ");
	scanf("%lf %lf", &arc, &angle);
	circumference_earth = (360 / angle) * arc;
	radius_earth = circumference_earth * 0.5 / 3.141592;
	printf("radius_earth(km): %lf\n", radius_earth);

	// 12. 4char > 1int
	char one, two, f, g;
	unsigned int result;
	printf("_ _ _ _ ?");
	scanf(" %c %c %c %c", &one, &two, &f, &g);
	result = one;
	result = two<<8 | result;
	result = f<<16 | result;
	result = g<<24 | result;
	printf("result: %x\n", result);

	return 0;

}