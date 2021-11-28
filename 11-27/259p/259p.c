#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, age;
	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &hour, &age);

	int charge;
	if (0 < age && age <= 2) charge = 0;			// 나이가 대, 소인 어느 곳에도 해당않는 'baby' - 무료
	else if (hour >= 17) charge = 10000;			// 나이가 baby가 아닌 사람 중 시간이 after 17 - 야간
	else if (12 < age && age < 65) charge = 34000;	// 나이가 대인이고 시간이 after 17이 아님 - 자유 대인
	else if (0 < age) charge = 25000;				// 나이가 소인이고 시간이 after 17이 아님 - 자유 소인
	else charge = -1;								// 그 외의 입력은 오류처리

	if (charge >= 0) printf("요금은 %d입니다.\n", charge);
	else printf("입력오류로 출력할 수 없습니다.\n");

	return 0;
}