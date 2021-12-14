#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count;
	long double pi = 3;

	printf("반복횟수: ");
	scanf("%d", &count);
	count--;		// pi = 3, Already 1st loop
	
	for (int i = 0; i < count; i++) {
		pi += (i%2==1?-1:1) * (long double)1 / ((i + 1) * (i + 2) * (2 * i + 3));
		int interim_100units_check = (((i + 1) % 100) == 0) && ((i + 1) != count);		// 중간처리값을 백단위로 알림
		if (interim_100units_check) printf("[%d번째계산] PI = %.50llf\n", (i + 1), pi);
	}

	printf("총 반복 %d회, PI = %.50llf\n", count + 1, pi);

	return 0;
}