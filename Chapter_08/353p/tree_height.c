#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double degree_to_radian(double degree);

int main(void) {
	double height, distance, tree_height, degrees, radians;
	printf("my height(m): ");
	scanf("%lf", &height);
	printf("tree-me(m): ");
	scanf("%lf", &distance);
	printf("degree(им): ");
	scanf("%lf", &degrees);
	radians = degree_to_radian(degrees);
	tree_height = (tan(radians) * distance) + height;
	printf("tree height(m): %lf\n", tree_height);

	return 0;
}

double degree_to_radian(double degree) {
	return degree * 3.1415926535 / 180;
}