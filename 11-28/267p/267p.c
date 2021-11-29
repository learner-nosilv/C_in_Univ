#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int times;
	int i = 1;

	printf("which times table? ");
	scanf("%d", &times);

	while (i <= 9) {
		printf("%d * %d = %3d\n", times, i, times * i);
		i++;
	}
	
	i = 1;
	printf("===========================\n");
	printf("    n  >>  n제곱\n");
	printf("===========================\n");

	while (i <= 10) {
		printf("%5d	%7d\n", i, i * i);
		i++;
	}

	// 268p 예제 #3 1부터 N까지의 합 → {n*(n+1)}/2
	// 269p 예제 #4 1부터 N까지의 짝수 합 → (n//2)*(n//2+1)
	// 269p 예제 #4_2 1부터 N까지의 홀수 합 → (n//2)^2

	i = 1;
	int result = 0;
	int n;

	printf("1부터 어디까지의 합? ");
	scanf("%d", &n);

	while (i <= n) {
		result += i;
		i++;
	}
	printf("result = %d\n", result);
	printf("test %d\n", n * (n + 1) / 2);

	i = 2;
	result = 0;
	printf("1부터 어디까지의 짝수 합? ");
	scanf("%d", &n);

	while (i <= n) {
		result += i;
		i += 2;
	}
	printf("result = %d\n", result);
	printf("test %d\n", (n / 2)*((n / 2) + 1));

	i = 1;
	result = 0;

	printf("1부터 어디까지의 홀수 합? ");
	scanf("%d", &n);

	while (i <= n) {
		result += i;
		i += 2;
	}

	printf("result = %d\n", result);
	printf("test %d\n", ((n + 1) / 2) * ((n + 1) / 2));

	// 259p. 예제 #5
	i = 0;
	result = 0;

	while (i < 5) {
		printf("%[합 구하기] %d/5번째 정수 입력: ", i+1);
		scanf("%d", &n);
		result += n;
		i++;
	}
	printf("총 합 = %d\n", result);

	// 275p. average.c
	int grade = 0;
	double sum , average;
	sum = average = 0;
	n = 0;

	printf("* 종료하려면 음수를 입력하시오\n");

	while (grade >= 0) {
		n++;
		printf("%d번째 성적입력 >> ", n);
		scanf("%d", &grade);
		sum += grade;
	}	// #n. grade < 0
	sum -= grade;
	n--;	// erasing last input

	average = sum / n;
	printf("총 %d인의 성적평균 >> %lf\n", n, average);
	
	// 276p. gcd.c 최대공약수 찾기
	int a, b, gcd;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);
	
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}

	while (b){
		gcd = a % b;
		a = b;
		b = gcd;
	}
	printf("최대 공약수 >> %d\n", a);

	int halflife;	// 반감기
	times = 0;	// 반감기 횟수
	double initial = 100;	// 현재 양, 처음 양(=100%)
	double current = initial;

	printf("반감기를 입력하시오(년)");
	scanf("%d", &halflife);

	while (current > initial / 10) {	// 현재 양 > 처음 양의 1/10
		current /= 2;					// 반띵
		times++;						// 횟수 증가
		printf("#%d. %d년 후에 남은 양 : %lf\n", times, halflife * times , current);
	}
	printf("[1/10 이하로 되기까지]\n걸린 반감기 횟수: %d 회	|	시간: %d 년\n", times, halflife * times);
	
	return 0;
}