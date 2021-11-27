#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// int rand(void), void srand(unsigned int), int RAND_MAX
#include <time.h>		// time_t time(time_t* timer)

int main(void) 
{
	int com, user;

	srand(time(NULL));			// 매 초 변하는 seed 설정
	com = (rand() % 3) + 1;		// {1, 2, 3}

	printf("선택하시오(1: 가위, 2:바위, 3:보)");
	scanf("%d", &user);

	printf("User: %d VS Com: %d\n", user, com);
	switch (com - user) {
		case 0:
			printf("서로 비겼음\n");
			break;
		case 1:			// 바위-가위, 보-바위
		case -2:		// 가위-보 
			printf("컴퓨터가 이겼음\n");
			break;
		case -1:		// 가위-바위, 바위-보
		case 2:			// 보-가위
			printf("사용자가 이겼음\n");
			break;
		default:
			printf("[Err]입력값이 1, 2, 3이 아닙니다\n");
	}

	return 0;
}