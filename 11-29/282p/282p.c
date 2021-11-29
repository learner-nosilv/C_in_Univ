#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// 랜덤애들
#include <time.h>	// srand(time(NULL))

int main(void) {
	int range = 100;		// 1~100 범위
	int times = 1;			// 탐색횟수
	// ^^^^^ user setting ^^^^^
	int current = range;	// 현재탐색범위
	int user;							// 사용자가 낼 답
	srand(time(NULL));					// seed 생성
	int computer = (rand()%100) + 1;	// 정답 생성


	while (current > 1) {
		current /= 2;
		times++;
	}
	printf("[1~100] 숫자맞추기는 %d번이면 맞출 수 있습니다.\n\n", times);

	times = 1;
	do {
		printf("%d회 시도. 정답을 추측하여 보시오: ", times);
		scanf("%d", &user);
		times++;

		if (user > computer) printf("정답보다 더 큰 숫자를 입력하였습니다.\n\n");
		else if (user < computer) printf("정답보다 더 작은 숫자를 입력하였습니다.\n\n");
	} while (user != computer);
	times--;
	printf("축하합니다. 답은 [%d]입니다. 시도횟수=%d\n", computer, times);

	return 0;
}

/*
* <의사코드>
*
* 숫자범위 = 100
* 현재범위 = 숫자범위
* 탐색횟수 = 1;
* while (탐색범위 > 1){
*	탐색범위 /= 2
*	탐색횟수 ++
* }
*
* printf {
*	1~100 중 숫자 맞추기
*	최대 N번이면 맞출 수 있습니다.
* }
*
* do {
*	입력받기
*	switch ( 입력 > 답 ){
*		case 1:
*			printf 숫자를 높게 입력했다 break
*		case 0:
*			printf 숫자를 낮게 입력했다 break
*	}
* } while (입력 != 답)
* printf '축하합니다'와 시도횟수
* 
* >>> switch 실패 WHY SWITCH는 반띵인데, 실제 경우의 수는 많다 적다 '같다' 이렇게 3가지라서
*/