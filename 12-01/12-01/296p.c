#include <stdio.h>

int main(void) {

	int a, b, c;	// base�غ�, height����, hypotenuse����
	int i=0;
	
	printf("[�� ���� 100������ ������ �����ﰢ�� ã��]\n");
	printf("        ����\t\t        ����\n");

	for (a = 1; a < 101; a++)
		for (b = a; b < 101; b++)
			for (c = 1; ((a + b) > c) && (c < 101); c++)
				if (c * c == (a * a + b * b)) {
					printf("%3d %3d %3d\t\t", a, b, c);
					i++;
					if (i == 2) {
						printf("\n");
						i = 0;
					}
					
				}
	return 0;
}