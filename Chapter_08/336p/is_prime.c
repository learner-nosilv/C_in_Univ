#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num);

int main(void) {
	int num;
	printf("Is it 'Prime'? _\b");
	scanf("%d", &num);

	switch (is_prime(num))
	{
		case 0:
			printf("No, It isn't.\n\n");
		case 1:
			printf("Yes, It's prime.\n\n");
		default:
			break;
	}

	return 0;
}

int is_prime(int num) {
	for (int i = 1; i < num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}