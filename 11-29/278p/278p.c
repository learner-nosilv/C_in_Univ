#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("(1)\n");
	int initial_germs = 10;		// ���� ���ռ�
	int multiple = 4;			// �ð��� ������
	int terms = 7;				// N�ð� ��
// ^^^^^^^ setting area ^^^^^^^
	int counter = 0;
	int current_germs = initial_germs;

	while (counter <= 7) {
		printf("#%d�ð� ��, ���� ��: %d����\n", counter, current_germs);
		counter++;
		current_germs *= multiple;
	}
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");

	printf("(2)\n");
	int initial_thickness = 1;	// �� ���� �β�
	int times = 50;				// ���ϴ� ���� Ƚ��
	// ^^^^^^^ setting area ^^^^^^^
	long long current_thickness = initial_thickness;	// ���� �β�
	counter = 0;								// ���� ���� Ƚ��

	while (counter <= times) {
		printf("[%d�� ����] %lld mm\n", counter, current_thickness);
		counter++;
		current_thickness *= 2;
	}
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");
	return 0;
}