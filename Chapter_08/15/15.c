#include <stdio.h>

int is_prime(int n);

int main(void) {
	for (int i = 2; i <= 100; i++) {
		if (is_prime(i))
			printf("%d  ", i);
	}
	return 0;
}

int is_prime(int n) {
	switch (n) {
		case 1:
			return 0;
		case 2:
			return 1;
		default:
			if (n % 2 == 0) return 0;	// 2외의 짝수는 소수가 절대 아님
			int max = n / 2;
			for (int i = 3; i <= max; i += 2) {
				if (n % i == 0) return 0;
			}
			return 1;
	}
}