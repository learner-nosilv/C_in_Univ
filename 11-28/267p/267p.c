#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int times;
	int i = 1;

	printf("which times table? ");
	scanf("%d", &times);

	while (i <= 9) {
		printf("%d * %d = %3d\n", times, i, times * i);
		i++;
	}
	
	i = 1;
	printf("===========================\n");
	printf("    n  >>  n����\n");
	printf("===========================\n");

	while (i <= 10) {
		printf("%5d	%7d\n", i, i * i);
		i++;
	}

	// 268p ���� #3 1���� N������ �� �� {n*(n+1)}/2
	// 269p ���� #4 1���� N������ ¦�� �� �� (n//2)*(n//2+1)
	// 269p ���� #4_2 1���� N������ Ȧ�� �� �� (n//2)^2

	i = 1;
	int result = 0;
	int n;

	printf("1���� �������� ��? ");
	scanf("%d", &n);

	while (i <= n) {
		result += i;
		i++;
	}
	printf("result = %d\n", result);
	printf("test %d\n", n * (n + 1) / 2);

	i = 2;
	result = 0;
	printf("1���� �������� ¦�� ��? ");
	scanf("%d", &n);

	while (i <= n) {
		result += i;
		i += 2;
	}
	printf("result = %d\n", result);
	printf("test %d\n", (n / 2)*((n / 2) + 1));

	i = 1;
	result = 0;

	printf("1���� �������� Ȧ�� ��? ");
	scanf("%d", &n);

	while (i <= n) {
		result += i;
		i += 2;
	}

	printf("result = %d\n", result);
	printf("test %d\n", ((n + 1) / 2) * ((n + 1) / 2));

	// 259p. ���� #5
	i = 0;
	result = 0;

	while (i < 5) {
		printf("%[�� ���ϱ�] %d/5��° ���� �Է�: ", i+1);
		scanf("%d", &n);
		result += n;
		i++;
	}
	printf("�� �� = %d\n", result);

	// 275p. average.c
	int grade = 0;
	double sum , average;
	sum = average = 0;
	n = 0;

	printf("* �����Ϸ��� ������ �Է��Ͻÿ�\n");

	while (grade >= 0) {
		n++;
		printf("%d��° �����Է� >> ", n);
		scanf("%d", &grade);
		sum += grade;
	}	// #n. grade < 0
	sum -= grade;
	n--;	// erasing last input

	average = sum / n;
	printf("�� %d���� ������� >> %lf\n", n, average);
	
	// 276p. gcd.c �ִ����� ã��
	int a, b, gcd;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);
	
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (b){
		gcd = a % b;
		a = b;
		b = gcd;
	}
	printf("�ִ� ����� >> %d\n", a);

	int halflife;	// �ݰ���
	times = 0;	// �ݰ��� Ƚ��
	double initial = 100;	// ���� ��, ó�� ��(=100%)
	double current = initial;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��)");
	scanf("%d", &halflife);

	while (current > initial / 10) {	// ���� �� > ó�� ���� 1/10
		current /= 2;					// �ݶ�
		times++;						// Ƚ�� ����
		printf("#%d. %d�� �Ŀ� ���� �� : %lf\n", times, halflife * times , current);
	}
	printf("[1/10 ���Ϸ� �Ǳ����]\n�ɸ� �ݰ��� Ƚ��: %d ȸ	|	�ð�: %d ��\n", times, halflife * times);
	
	return 0;
}