// 305p. 도박사의 확률
#define SEED_MONEY 50	// 시작달러
#define ODDS 0.5		// 딸 확률
#define COIN 1			// 거는 금액
#define GOAL 250		// 목표 금액
#define TIMES 100		// 가는 횟수
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int win250 = 0;
	srand(time(NULL));

	for (int i = 1; i <= TIMES; i++) {		// 100번을 다녀와요
		int money = SEED_MONEY;
		int victory = 0;
		int fail = 0;
		printf("[#%03d.]\t", i);
		while (1) {										// 한 번 갔어요
			if (((double)rand() / RAND_MAX) < 0.5) {	// 이기면
				money += COIN;
				victory++;
			}
			else {
				money -= COIN;
				fail++;
			}
			if (money == GOAL) {
				printf("%3d승 %3d패\t250달러 달성으로 OUT\n", victory, fail);
				win250++;
				break;
			}
			else if (money == 0) {
				printf("%3d승 %3d패\t잔액부족으로 OUT\n", victory, fail);
				break;
			}
		}
	}
	printf("========================================\n");
	printf("초기금액 $%d\t목표금액 $%d\n", SEED_MONEY, GOAL);
	printf("[총 %d회] %3d회 250OUT\t\t%7.0lf%% \n", TIMES, win250, (double)win250/TIMES*100);
	return 0;
}