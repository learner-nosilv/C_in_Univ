#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char a);

int main(void) {
	char a;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &a);
	printf("%c�� ���ĺ� ����%s�ϴ�.\n", a, (check_alpha(a) ? "��" : "�� �ƴ�"));
	return 0;
}

int check_alpha(char a) {
	if (('a' <= a && a <= 'z')||('A' <= a && a <= 'Z')) return 1;
	return 0;
}