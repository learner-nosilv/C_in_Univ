#include <stdio.h>

extern unsigned random_i(void);	// �Լ��� ȣ�Ⱑ���ϳ�
extern double random_f(void);
extern int MOD;

int main(void) {
	MOD = 10;
	for (int i = 0; i < 10; i++)
		printf("%d ", random_i());
	return 0;
}