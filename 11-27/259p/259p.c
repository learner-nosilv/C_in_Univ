#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, age;
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &hour, &age);

	int charge;
	if (0 < age && age <= 2) charge = 0;			// ���̰� ��, ���� ��� ������ �ش�ʴ� 'baby' - ����
	else if (hour >= 17) charge = 10000;			// ���̰� baby�� �ƴ� ��� �� �ð��� after 17 - �߰�
	else if (12 < age && age < 65) charge = 34000;	// ���̰� �����̰� �ð��� after 17�� �ƴ� - ���� ����
	else if (0 < age) charge = 25000;				// ���̰� �����̰� �ð��� after 17�� �ƴ� - ���� ����
	else charge = -1;								// �� ���� �Է��� ����ó��

	if (charge >= 0) printf("����� %d�Դϴ�.\n", charge);
	else printf("�Է¿����� ����� �� �����ϴ�.\n");

	return 0;
}