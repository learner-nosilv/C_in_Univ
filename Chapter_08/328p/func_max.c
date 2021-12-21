#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int, int);

int main(void) {
	int x, y;
	printf("---[정수비교]---\n");
	printf("비교하고 싶은 두 정수: ");
	scanf("%d %d", &x, &y);
	printf("더 큰 값은 %d입니다.\n", max(x, y));
	return 0;
}
int max(int a, int b) {
	a = (a > b ? a : b);
	return a;
}