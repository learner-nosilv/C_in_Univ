// 305p. ���ڻ��� Ȯ��
#define SEED_MONEY 50	// ���۴޷�
#define ODDS 0.5		// �� Ȯ��
#define COIN 1			// �Ŵ� �ݾ�
#define GOAL 250		// ��ǥ �ݾ�
#define TIMES 100		// ���� Ƚ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int win250 = 0;
	srand(time(NULL));

	for (int i = 1; i <= TIMES; i++) {		// 100���� �ٳ�Ϳ�
		int money = SEED_MONEY;
		int victory = 0;
		int fail = 0;
		printf("[#%03d.]\t", i);
		while (1) {										// �� �� �����
			if (((double)rand() / RAND_MAX) < 0.5) {	// �̱��
				money += COIN;
				victory++;
			}
			else {
				money -= COIN;
				fail++;
			}
			if (money == GOAL) {
				printf("%3d�� %3d��\t250�޷� �޼����� OUT\n", victory, fail);
				win250++;
				break;
			}
			else if (money == 0) {
				printf("%3d�� %3d��\t�ܾ׺������� OUT\n", victory, fail);
				break;
			}
		}
	}
	printf("========================================\n");
	printf("�ʱ�ݾ� $%d\t��ǥ�ݾ� $%d\n", SEED_MONEY, GOAL);
	printf("[�� %dȸ] %3dȸ 250OUT\t\t%7.0lf%% \n", TIMES, win250, (double)win250/TIMES*100);
	return 0;
}