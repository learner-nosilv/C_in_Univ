#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main(void) {

	int result = 0;
	for (int i = 10; i < 31; i++)
		for (int j = 0; j < 6; j++)
			result += i + j;
	printf("Result: %d\n", result);

}