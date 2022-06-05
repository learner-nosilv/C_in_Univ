#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void) {
	double x1, x2, y1, y2;
	printf("점1. (x, y) 입력: ");
	scanf("%lf %lf", &x1, &y1);
	printf("점2. (x, y) 입력: ");
	scanf("%lf %lf", &x2, &y2);
	printf("두 점 사이의 거리는 %lf 입니다.\n", get_distance(x1, y1, x2, y2));
	printf("식: √{(%.0lf-%.0lf)^2 + (%.0lf-%.0lf)^2}\n", x1, x2, y1, y2);
	return 0;
}

double get_distance(double x1, double y1, double x2, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (x1 - x2) * (x1 - x2));
}