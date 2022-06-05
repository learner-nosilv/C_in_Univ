#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_menu(void);
int pick_menu(void);
int add(int a, int b);
int minus(int a, int b);
int multiple(int a, int b);
double division(int a, int b);
int remainder(int a, int b);
void calculate(int n);

int main(void) {
	char keep;
	do {
		show_menu();
		int pick = pick_menu();
		calculate(pick);
		printf("����Ϸ��� y�� �����ÿ�.\n");
		keep = _getch();
	} while (keep == 'y');
	return 0;
}

void show_menu(void) {
	printf("================\n");
	printf("[�������� MENU]\n");
	printf("================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
}

int add(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int multiple(int a, int b) {
	return a * b;
}
double division(int a, int b) {
	return a / (double)b;
}
int remainder(int a, int b) {
	return a % b;
}

int pick_menu(void) {
	int pick;
	do {
	printf("���Ͻô� �޴��� �����ϼ���(1~5 ����): _\b");
	scanf("%d", &pick);
	} while (pick != 1 && pick != 2 && pick != 3 && pick != 4 && pick != 5);
	return pick;
}

void calculate(int n) {
	int a, b;
	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	switch (n) {
		case 1:
			printf("������: %d = %d + %d\n", add(a, b), a, b);
			break;
		case 2:
			printf("������: %d = %d - %d\n", minus(a, b), a, b);
			break;
		case 3:
			printf("������: %d = %d �� %d\n", multiple(a, b), a, b);
			break;
		case 4:
			printf("������: %lf = %d �� %d\n", division(a, b), a, b);
			break;
		case 5:
			printf("������: %d = %d �� %d�� ������\n", remainder(a, b), a, b);
			break;
		default:
			printf("ERR\n");
			break;
	}
}