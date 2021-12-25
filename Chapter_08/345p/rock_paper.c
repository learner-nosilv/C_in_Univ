#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int answer(void);

int main(void) {
	int user, com;
	while (1) {
		printf("[ ROCK! PAPER! SCISSORS! ]\n");
		printf("- Rock :	0\n");
		printf("- Paper :	1\n");
		printf("- Scissors :	2\n");
		printf("- Quit : etc.\n");
		printf("-----------------\n");
		printf("- User : _\b");
		scanf(" %d", &user);
		if (user != 0 && user != 1 && user != 2) break;
		com = answer();
		for (int i = 0; i < 5; i++) {
			printf("¡¤ ");
			Sleep(300);	// delay 1s
		}
		printf("\n");
		printf("- Com : %d\n\n", com);
		Sleep(300);
		int result = user - com;
		switch (result) {
			case 0:
				printf("¡æ DRAW \n");
				break;
			case 1:
			case -2:
				printf("¡æ USER WIN :)\n");
				break;
			case -1:
			case 2:
				printf("¡æ COM WIN :(\n");
				break;
		}
		printf("\n\n");
		Sleep(1000);
	}
	return 0;
}

int answer(void) {
	srand((unsigned)time(NULL));
	return (rand() % 3);	/// rock0 paper1 scissors2
}