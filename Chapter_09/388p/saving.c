#include <stdio.h>

long num = 0;
void init(void);

int main(void) {
	init();
	init();
	init();
	return 0;
}

void init(void) {
	printf("init(): ");
	switch (num) {
		case 0:
			printf("��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�.\n");
			num = 1;
			break;
		case 1:
			printf("�̹� ������ �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ�����ʽ��ϴ�.\n");
			break;
	}
}

/*
long balance = 0;	// ����static������global
void save(int amount);

int main(void) {
	printf("==================================\n");
	printf("�Ա� \t���\t �ܰ�\n");
	printf("==================================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==================================\n");

	return 0;
}

void save(int amount) {
	if (amount >= 0)
		printf("%d \t\t", amount);
	else
		printf("\t%d \t", -amount);
	balance += amount;
	printf("%d \n", balance);
}
*/