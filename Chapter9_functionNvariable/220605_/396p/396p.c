/* 9.7 가변 매개 변수 함수
*  함수의 매개 변수의 갯수를 호출할 때마다 달라지게 하는 기능!
*  예) printf() - 가변적이다
*/

#include <stdio.h>
#include <stdarg.h>	//standard argument?

int sum(int, ...);
// 가변 매개 변수를 만들기위해서는 stdarg 와 ...를 사용해야 함

int main(void) {
	int answer = sum(4, 4, 3, 2, 1);
	printf("합 : %d\n", answer);

	return 0;
}

int sum(int num, ...) {	// num: 변수갯수
	int answer = 0; // auto
	va_list argptr;	// stdarg의 new type, name: argument pointer

	va_start(argptr, num);	// 리스트의 첫 포인터인 argptr과 num값 이용해서 가변매개변수도입
	for (; num > 0; num--)
		answer += va_arg(argptr, int);	// 리스트의 인수호출(자동으로 호출하고 그다음으로 넘어가나보ㅗㅁ)

	va_end(argptr);	// 가변매개변수기능 종료
	return answer;
}