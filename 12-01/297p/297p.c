#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SEED_MONEY 1000000
int main(void) {
	//297p. (2) No order
	int i=0;
	printf("[�ֻ��� 2���� ���� 6�� �Ǵ� ���]\n");
	for (int a = 1; a <= 6; a++)
		for (int b = a; b <= 6; b++)
			if (a + b == 6){
				printf("(%d, %d)\n", a, b);
				i++;
			}
	printf("\t%d����\n\n", i);

	i = 0;
	printf("[�ֻ��� 3���� ���� 10�� �Ǵ� ���]\n");
	for (int a = 1; a <= 6; a++)
		for (int b = a; b <= 6; b++)
			for (int c = b; c<=6; c++)
				if (a + b + c == 10) {
				printf("(%d, %d, %d)\n", a, b, c);
				i++;
				}
	printf("\t%d����\n", i);

	int year = 0, money = SEED_MONEY;

	while (1) {
		year++;
		money += money * 0.3;	// int ���ε� ��� �Ǵ� �ǰ�?
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("\n10�谡 �Ƿ��� %d���� �ɸ��ϴ�.\n\n", year);

	// #1. �Ǽ��� ������
	double num;

	while (1) {
		printf("� ���� �������� ���Ͻðڽ��ϱ�? ");
		scanf("%lf", &num);
		if (num < 0) {
			printf("%������ �������� '���'�ۿ� �����ϴ�.\n�����մϴ�.\n");
			break;
		}
		printf("%lf�� �������� %lf�Դϴ�.\n", num, sqrt(num));
	}

	for (i = 0; i < 10000; i++) {
		for (int j = 0; j < 50; j++) {
			if (_kbhit())
				goto OUT;
			printf("*");
		}
			
	}
OUT:
	printf("OUT\n");
	return 0;
}