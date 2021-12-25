#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void);

int main(void) {
	srand((unsigned)time(NULL));
	int toss, heads, tails;
	heads = tails = 0;

	printf("[COIN TOSS]");
	printf("How many times? _\b");
	scanf("%d", &toss);

	for (int i = 0; i < toss; i++) {
		switch (coin_toss()) {
			case 0:
				heads++;
				break;
			case 1:
				tails++;
				break;
		}
	}

	printf("[Result]\n");
	printf("Heads: %d(%.2lf%%)\nTails: %d(%.2lf%%)\n\n", heads, 100.0 * heads / toss, tails, 100.0 * tails / toss);
	return 0;
}

int coin_toss(void) {
	return (rand() % 2 != 0);	// 0~32767Àº µü ¹Ý¹Ý È¦Â¦, '0'ÀÏ¶§ 0ÀÌµµ·Ï
}