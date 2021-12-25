#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void display_car(int car_number, int distance);
int distance_car(void);

int main(void) {
	srand((unsigned)time(NULL));
	scanf("%*c");
	printf("[ CAR RACING ]\n\n");
	for(int i=1;i<4;i++){
		display_car(i, distance_car());
		printf("¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢¦¢\n");
	}
	return 0;
}

void display_car(int car_number, int distance) {
	Sleep(300);
	printf("[ %d ] ", car_number);
	Sleep(300);
	for (int i = 3; i > 0; i--) {
		printf("%d",i);
		Sleep(500);
		printf("\b");
	}
	printf("GO!\n");
	Sleep(100);

	for (; distance > 0; distance--) {
		printf("¢º");
		Sleep(100);
	}
	printf("\n");
	return;
}

int distance_car(void) {
	return (rand() % 20 + 1);
}