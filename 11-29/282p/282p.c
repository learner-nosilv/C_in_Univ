#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// �����ֵ�
#include <time.h>	// srand(time(NULL))

int main(void) {
	int range = 100;		// 1~100 ����
	int times = 1;			// Ž��Ƚ��
	// ^^^^^ user setting ^^^^^
	int current = range;	// ����Ž������
	int user;							// ����ڰ� �� ��
	srand(time(NULL));					// seed ����
	int computer = (rand()%100) + 1;	// ���� ����


	while (current > 1) {
		current /= 2;
		times++;
	}
	printf("[1~100] ���ڸ��߱�� %d���̸� ���� �� �ֽ��ϴ�.\n\n", times);

	times = 1;
	do {
		printf("%dȸ �õ�. ������ �����Ͽ� ���ÿ�: ", times);
		scanf("%d", &user);
		times++;

		if (user > computer) printf("���亸�� �� ū ���ڸ� �Է��Ͽ����ϴ�.\n\n");
		else if (user < computer) printf("���亸�� �� ���� ���ڸ� �Է��Ͽ����ϴ�.\n\n");
	} while (user != computer);
	times--;
	printf("�����մϴ�. ���� [%d]�Դϴ�. �õ�Ƚ��=%d\n", computer, times);

	return 0;
}

/*
* <�ǻ��ڵ�>
*
* ���ڹ��� = 100
* ������� = ���ڹ���
* Ž��Ƚ�� = 1;
* while (Ž������ > 1){
*	Ž������ /= 2
*	Ž��Ƚ�� ++
* }
*
* printf {
*	1~100 �� ���� ���߱�
*	�ִ� N���̸� ���� �� �ֽ��ϴ�.
* }
*
* do {
*	�Է¹ޱ�
*	switch ( �Է� > �� ){
*		case 1:
*			printf ���ڸ� ���� �Է��ߴ� break
*		case 0:
*			printf ���ڸ� ���� �Է��ߴ� break
*	}
* } while (�Է� != ��)
* printf '�����մϴ�'�� �õ�Ƚ��
* 
* >>> switch ���� WHY SWITCH�� �ݶ��ε�, ���� ����� ���� ���� ���� '����' �̷��� 3������
*/