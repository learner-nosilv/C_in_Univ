#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SEED_MONEY 1000000
int main(void) {
	//297p. (2) No order
	int i=0;
	printf("[주사위 2개로 합이 6이 되는 경우]\n");
	for (int a = 1; a <= 6; a++)
		for (int b = a; b <= 6; b++)
			if (a + b == 6){
				printf("(%d, %d)\n", a, b);
				i++;
			}
	printf("\t%d가지\n\n", i);

	i = 0;
	printf("[주사위 3개로 합이 10이 되는 경우]\n");
	for (int a = 1; a <= 6; a++)
		for (int b = a; b <= 6; b++)
			for (int c = b; c<=6; c++)
				if (a + b + c == 10) {
				printf("(%d, %d, %d)\n", a, b, c);
				i++;
				}
	printf("\t%d가지\n", i);

	int year = 0, money = SEED_MONEY;

	while (1) {
		year++;
		money += money * 0.3;	// int 형인데 어떻게 되는 건가?
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("\n10배가 되려면 %d년이 걸립니다.\n\n", year);

	// #1. 실수의 제곱근
	double num;

	while (1) {
		printf("어떤 수의 제곱근을 구하시겠습니까? ");
		scanf("%lf", &num);
		if (num < 0) {
			printf("%음수의 제곱근은 '허수'밖에 없습니다.\n종료합니다.\n");
			break;
		}
		printf("%lf의 제곱근은 %lf입니다.\n", num, sqrt(num));
	}

	for (i = 0; i < 10000; i++) {
		for (int j = 0; j < 50; j++) {
			if (_kbhit())
				goto OUT;
			printf("*");
		}
			
	}
OUT:
	printf("OUT\n");
	return 0;
}