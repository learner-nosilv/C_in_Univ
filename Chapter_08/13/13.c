#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m);

int main(void) {
	int n, m;
	printf("◆이 ◈의 배수일까?\n");
	printf("◆과 ◈을 입력하세요: ");
	scanf("%d %d", &n, &m);

	if (is_multiple(n, m))
		printf("%d는 %d의 배수입니다.  ∵ %d = %d × %d\n", n, m, n, m, n / m);
	else
		printf("%d는 %d의 배수가 아닙니다.\n", n, m);

	return 0;
}
int is_multiple(int n, int m) {
	if (n % m)
		return 0;
	else
		return 1;
}