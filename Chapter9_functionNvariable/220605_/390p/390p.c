/*
	생존주기가 프로그램과 동일하여
	초기화를 한번만 한다는 특징을 가진 전역변수를 이용하여
	네트워크 초기화를 <한번만> 하는 유사 프로그램 제작
*/

#include <stdio.h>

void init(void);

int main(void) {
	for(int i = 0; i<3; i++)
		init();
	return 0;
}

void init(void) {
	static counter = 0;
	if (counter == 0) {
		printf("init(): 네트워크 장치를 초기화합니다.\n");
		counter++;
	}
	else
		printf("init(): 이미 초기화되어 초기화하지 않습니다.\n");
}