#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("*******************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("*******************\n");

	while(1){
		char choice;
		do {
			printf("������ �����Ͻÿ�: _\b");
			scanf(" %c", &choice);
		} while (choice != 'A' && choice != 'S' && choice != 'M' && choice != 'D' && choice != 'Q');

		if (choice == 'Q') break;
		else if (choice == 'A') {
			int a, b;
			printf("[����] �� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a + b);
			printf("---------------------------\n");
		}
		else if (choice == 'S') {
			int a, b;
			printf("[����] �� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			printf("%d - %d = %d\n", a, b, a - b);
			printf("---------------------------\n");
		}
		else if (choice == 'M') {
			int a, b;
			printf("[����] �� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			printf("%d �� %d = %d\n", a, b, a * b);
			printf("---------------------------\n");
		}
		else if (choice == 'D') {
			int a, b;
			printf("[������] �� ������ �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
			printf("%d �� %d = %lf\n", a, b, (double)a / b);
			printf("---------------------------\n");
		}
		else continue;	// Ȥ�ó��ؼ�
	}
	return 0;
}