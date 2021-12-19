#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int length;
	while (1) {
		printf("막대의 길이(종료: -1): ");
		scanf("%d", &length);
		
		if (length == -1) break;
		else if (length < 1 || length>50) printf("1~50사이의 숫자를 입력부탁드립니다.\n");
		else {
			for (int i = 0; i < length; i++) printf("*");
			printf("\n");
		}
	}
	return 0;
}