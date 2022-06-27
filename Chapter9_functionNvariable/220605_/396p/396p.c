/* 9.7 ���� �Ű� ���� �Լ�
*  �Լ��� �Ű� ������ ������ ȣ���� ������ �޶����� �ϴ� ���!
*  ��) printf() - �������̴�
*/

#include <stdio.h>
#include <stdarg.h>	//standard argument?

int sum(int, ...);
// ���� �Ű� ������ ��������ؼ��� stdarg �� ...�� ����ؾ� ��

int main(void) {
	int answer = sum(4, 4, 3, 2, 1);
	printf("�� : %d\n", answer);

	return 0;
}

int sum(int num, ...) {	// num: ��������
	int answer = 0; // auto
	va_list argptr;	// stdarg�� new type, name: argument pointer

	va_start(argptr, num);	// ����Ʈ�� ù �������� argptr�� num�� �̿��ؼ� �����Ű���������
	for (; num > 0; num--)
		answer += va_arg(argptr, int);	// ����Ʈ�� �μ�ȣ��(�ڵ����� ȣ���ϰ� �״������� �Ѿ�����Ǥ�)

	va_end(argptr);	// �����Ű�������� ����
	return answer;
}