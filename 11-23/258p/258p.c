#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// int rand(void), void srand(unsigned int), int RAND_MAX
#include <time.h>		// time_t time(time_t* timer)

int main(void) 
{
	int com, user;

	srand(time(NULL));			// �� �� ���ϴ� seed ����
	com = (rand() % 3) + 1;		// {1, 2, 3}

	printf("�����Ͻÿ�(1: ����, 2:����, 3:��)");
	scanf("%d", &user);

	printf("User: %d VS Com: %d\n", user, com);
	switch (com - user) {
		case 0:
			printf("���� �����\n");
			break;
		case 1:			// ����-����, ��-����
		case -2:		// ����-�� 
			printf("��ǻ�Ͱ� �̰���\n");
			break;
		case -1:		// ����-����, ����-��
		case 2:			// ��-����
			printf("����ڰ� �̰���\n");
			break;
		default:
			printf("[Err]�Է°��� 1, 2, 3�� �ƴմϴ�\n");
	}

	return 0;
}