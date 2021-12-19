#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int front = 0, rear = 1, temp, count;
	do {
		printf("몇번째 항까지 구할까요?(1~): _\b");
		scanf(" %d", &count);
	} while (count < 1);

	for (int i = 0; i <= count; i++) {
		printf("%d, ", front);
		temp = front + rear;
		front = rear;
		rear = temp;
	}
	printf("\b\b  ");
	return 0;
}