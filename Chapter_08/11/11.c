#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand(void);

int main(void) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++)
		printf("%lf  ", f_rand());
	printf("\b\b\n");
	return 0;
}

double f_rand(void) {
	return ((double)rand()) / RAND_MAX;
}