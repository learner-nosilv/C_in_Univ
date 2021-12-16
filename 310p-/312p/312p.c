#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int i;
	for (i = 10; i >= 0; i--) {
		printf("%d\n", i);
	}

	int x = 10;
	while (x >= 0) {
		printf("%d\n", x);
		x--;
	}
	
	return 0;
}