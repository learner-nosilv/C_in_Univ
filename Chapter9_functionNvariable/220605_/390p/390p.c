/*
	�����ֱⰡ ���α׷��� �����Ͽ�
	�ʱ�ȭ�� �ѹ��� �Ѵٴ� Ư¡�� ���� ���������� �̿��Ͽ�
	��Ʈ��ũ �ʱ�ȭ�� <�ѹ���> �ϴ� ���� ���α׷� ����
*/

#include <stdio.h>

void init(void);

int main(void) {
	for(int i = 0; i<3; i++)
		init();
	return 0;
}

void init(void) {
	static counter = 0;
	if (counter == 0) {
		printf("init(): ��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�.\n");
		counter++;
	}
	else
		printf("init(): �̹� �ʱ�ȭ�Ǿ� �ʱ�ȭ���� �ʽ��ϴ�.\n");
}