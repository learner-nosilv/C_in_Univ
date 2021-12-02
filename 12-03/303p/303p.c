// 303p. compound_interest.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RATE 0.05
#define INVESTMENT 1000000
#define YEARS 10

int main(void) {

	double total = INVESTMENT;

	printf("=========================\n");
	printf("연도\t원리금\n");
	printf("=========================\n");
	
	for (int i = 0; i <= YEARS; i++) {
		printf("%2d%14.1lf\n", i, total);
		total += total * RATE;
	}
	
	return 0;
}