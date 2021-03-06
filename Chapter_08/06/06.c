#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void) {
	int n;
	printf("薑熱: _\b");
	scanf("%d", &n);

	printf("礎熱?	%s\n", (even(n) ? "礎熱" : "?汝?"));
	printf("瞰渤高?	%d\n", absolute(n));
	printf("睡???	");
	switch (sign(n)) {
		case -1:
			printf("擠熱\n");
			break;
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("曄熱\n");
			break;
	}
	return 0;
}

int even(int n) {
	return !(n % 2);
}

int absolute(int n){
	return (n >= 0 ? n : -n);
}

int sign(int n) {
	return (n == 0 ? 0 : (n > 0 ? 1 : -1));
}