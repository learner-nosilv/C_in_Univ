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
			printf("연산을 선택하시오: _\b");
			scanf(" %c", &choice);
		} while (choice != 'A' && choice != 'S' && choice != 'M' && choice != 'D' && choice != 'Q');

		if (choice == 'Q') break;
		else if (choice == 'A') {
			int a, b;
			printf("[덧셈] 두 정수를 입력하시오: ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a + b);
			printf("---------------------------\n");
		}
		else if (choice == 'S') {
			int a, b;
			printf("[뺄셈] 두 정수를 입력하시오: ");
			scanf("%d %d", &a, &b);
			printf("%d - %d = %d\n", a, b, a - b);
			printf("---------------------------\n");
		}
		else if (choice == 'M') {
			int a, b;
			printf("[곱셈] 두 정수를 입력하시오: ");
			scanf("%d %d", &a, &b);
			printf("%d × %d = %d\n", a, b, a * b);
			printf("---------------------------\n");
		}
		else if (choice == 'D') {
			int a, b;
			printf("[나눗셈] 두 정수를 입력하시오: ");
			scanf("%d %d", &a, &b);
			printf("%d ÷ %d = %lf\n", a, b, (double)a / b);
			printf("---------------------------\n");
		}
		else continue;	// 혹시나해서
	}
	return 0;
}