#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num;
	printf("정수를 입력하시오: _\b");
	scanf("%d", &num);

	for (int j = 1; j <= num; j++) {	// '전체 줄'이면서, '한 줄당 나오는 숫자' 관여
		for (int i = 1; i <= j; i++)
			printf("%d ", i);
		printf("\n");
	}

	return 0;
}