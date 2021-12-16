#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main(void) {
	int counter;
	printf("Start(s)>> _\b");
	scanf("%d", &counter);

	for (int i = counter; i > 0; i--) {
		printf("%d  ", i);
		Sleep(1000);
	}
	printf("\a");

	return 0;
}