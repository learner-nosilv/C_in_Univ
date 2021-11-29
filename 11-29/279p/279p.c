#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// sentinel = 0
	int num, sum=0;

	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &num);
		sum += num;
	} while (num);	// num = 0이면 중단

	printf("숫자들의 합 = %d\n", sum);

	int i = 0;
	do
	{
		printf("1---NEW\n");
		printf("2---OPEN\n");
		printf("3---CLOSE\n");
		printf("하나를 선택하시오: _\b");
		scanf("%d", &i);

	} while (i != 1 && i != 2 && i != 3);

	printf("선택된 메뉴=%d\n",i);
	return 0;
}