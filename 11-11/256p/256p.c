#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("문자를 입력하시오: ");
	int str = getchar();

	switch (str) {		// 알파벳 자모 구분에 관한 자세한 것은 덮어두는 걸로
		case ('A'):
		case ('E'):
		case ('I'):
		case ('O'):
		case ('U'):
		case ('a'):
		case ('e'):
		case ('i'):
		case ('o'):
		case ('u'):
			printf("모음입니다\n");
		default:
			printf("자음입니다\n");
	}
	return 0;
}
