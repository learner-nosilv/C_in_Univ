#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);

int main(void) {
	srand((unsigned) time(NULL));
	char keep;
	printf("홀짝게임 <시작하려면 아무키나 누르세요>\n");
	_getch();
	do {
		int answer = b_rand();
		int user;

		printf("☞ 앞? 뒤? (앞이면 1, 뒤면 0입력):  _\b");
		scanf("%d", &user);
		for (int i = 0; i < 3; i++) {
			printf(". ");
			Sleep(300);
		}
		if (user == answer)
			printf("정답!\n");
		else
			printf("땡!\n");

		printf("계속하시겠습니까? (중단을 원할시 n을 입력해주세요)\n");
		keep=_getch();
		printf("--------------------\n");
	} while (keep!='n');

	return 0;
}

int b_rand(void) {
	return (rand() % 2);
}