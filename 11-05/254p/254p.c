#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a, b, c;
	int x, y, z, total_angle;
	printf("line  AB = c\n");
	printf("line  BC = a\n");
	printf("line  CA = b\n");
	printf("angle ab = C\n");
	printf("angle bc = A\n");
	printf("angle ca = B\n\n");

	printf("Length of a, b, c >> ");
	scanf("%d %d %d", &a, &b, &c);

	printf("Angle of A, B, C >> ");
	scanf("%d %d %d", &x, &y, &z);
	total_angle = x + y + z;

	switch (x) {
	case -1:
		num--;	break;
	case 1:
		num++;	break;
	default:
		num = 0;	break;
	}
	if (((a + b) > c && (b + c) > a && (c + a) > b) && (total_angle == 180)) printf("It's real triangle\n");
	else printf("It's not real triangle\n");
	
	return 0;
}