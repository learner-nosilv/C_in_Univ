#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;
	int result;

	// ���� > ��� > ��Ʈ�̵� > �� > ��Ʈ > �� > ���� > ,
	result = 2 > 3 || 6 > 7;	// 0; 0 || 0 '��>' > '��||'
	printf("%d\n", result);
	printf("x: %d, y: %d\n", x, y);

	result = 2 || 3 && 3 > 2;	// 1; �� 2 || 3 && 1
	printf("%d\n", result);
	printf("x: %d, y: %d\n", x, y);

	result = x = y = 1;			// 1; �� y = 1, x = y, result = x
	printf("%d\n", result);
	printf("x: %d, y: %d\n", x, y);

	result = -++x + y--;		// -1; x = 2, -2 + y = -1 , y = 0
	printf("%d\n", result);
	printf("x: %d, y: %d\n", x, y);

	return 0;
}