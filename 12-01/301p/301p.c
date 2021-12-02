#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;

	printf("[소 → 대문자 자동변환기]\n");
	printf("\t\t\t* 'Q' 입력시 종료됩니다.\n\n");
	while (1) {
		printf("소문자 입력: ");
		scanf(" %c", &letter);		// ** except space, tap, enter

		if (letter == 'Q') {
			break;
		}
		else if ('a' <= letter && letter <= 'z') {
			printf("%c → %c\n\n", letter, letter-32);
			continue;
		}
		else {
			printf("**'소문자'로 입력부탁드립니다.**\n\n");
			continue;
		}
	}
	return 0;
}