#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income);

int main(void) {
	int income;
	printf("�ҵ�(����): ");
	scanf("%d", &income);
	printf("�ҵ漼(����): %d\n",get_tax(income));
	return 0;
}

int get_tax(int income) {
	if (income > 1000)
		return (int) (80 + 0.1 * (income - 1000));
	else
		return (int)(income * 0.08);
}