#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int prime = 2; prime <= 100; prime++) {
		for (int check = 2; check < prime; check++) {
			if (prime % check == 0) break;	// �߰��� ����� �߰ߵǸ�, �ش� ������ �˻縦 ��ħ
			if(check == prime-1) printf("%d ", prime);	// ��� �˻������ ������ ��ġ��, �ش� ���ڴ� �Ҽ�
		}
	}
	return 0;
}
// �̰� �ּ��ΰ�?


// ���� Ȧ���ش����� ���ϵ� �ش�: goto��� ����
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) goto A;
		}
		printf("%d ", i);
	A:;
	}
	printf("\n");
	return 0;
}