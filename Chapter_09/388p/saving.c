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
			printf("네트워크 장치를 초기화합니다.\n");
			num = 1;
			break;
		case 1:
			printf("이미 이전에 초기화되었으므로 초기화하지않습니다.\n");
			break;
	}
}

/*
long balance = 0;	// 정적static→전역global
void save(int amount);

int main(void) {
	printf("==================================\n");
	printf("입금 \t출금\t 잔고\n");
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