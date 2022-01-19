#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void) {
	int n;
	printf("Á¤¼ö: _\b");
	scanf("%d", &n);

	printf("Â¦¼ö?	%s\n", (even(n) ? "Â¦¼ö" : "È¦¼ö"));
	printf("Àý´ñ°ª?	%d\n", absolute(n));
	printf("ºÎÈ£?	");
	switch (sign(n)) {
		case -1:
			printf("À½¼ö\n");
			break;
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("¾ç¼ö\n");
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