#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("(1)\n");
	int initial_germs = 10;		// 시작 세균수
	int multiple = 4;			// 시간당 증폭량
	int terms = 7;				// N시간 후
// ^^^^^^^ setting area ^^^^^^^
	int counter = 0;
	int current_germs = initial_germs;

	while (counter <= 7) {
		printf("#%d시간 후, 세균 수: %d마리\n", counter, current_germs);
		counter++;
		current_germs *= multiple;
	}
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");

	printf("(2)\n");
	int initial_thickness = 1;	// 한 장의 두께
	int times = 50;				// 원하는 접는 횟수
	// ^^^^^^^ setting area ^^^^^^^
	long long current_thickness = initial_thickness;	// 현재 두께
	counter = 0;								// 현재 접은 횟수

	while (counter <= times) {
		printf("[%d번 접음] %lld mm\n", counter, current_thickness);
		counter++;
		current_thickness *= 2;
	}
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");
	return 0;
}