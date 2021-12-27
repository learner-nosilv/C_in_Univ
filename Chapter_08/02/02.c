#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char a);

int main(void) {
	char a;
	printf("문자를 입력하시오: ");
	scanf(" %c", &a);
	printf("%c는 알파벳 문자%s니다.\n", a, (check_alpha(a) ? "입" : "가 아닙"));
	return 0;
}

int check_alpha(char a) {
	if (('a' <= a && a <= 'z')||('A' <= a && a <= 'Z')) return 1;
	return 0;
}