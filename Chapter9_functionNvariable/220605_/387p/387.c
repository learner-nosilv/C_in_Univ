/*
	���ݾ�->��������
	�ܰ��� save(int amount);
*/

#include <stdio.h>

unsigned int balance = 0;
void save(int amount);

int main(void) {
	printf("================================================\n");
	printf("�Ա�\t\t���\t\t�ܰ�\n");
	printf("================================================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(-60000);
	save(30000);
	printf("================================================\n");
	return 0;
}

void save(int amount) {
	if ((long) balance + amount < 0)
		printf("\t\t%d\t\t��ݺҰ�\n", -amount);
	else if (amount<0){
		balance += amount;
		printf("\t\t%d\t\t%d\n", -amount, balance);
	}
	else {
		balance += amount;
		printf("%d\t\t\t\t%d\n", amount, balance);
	}
}