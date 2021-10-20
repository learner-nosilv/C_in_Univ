/*
*	Chapter4. Variable & Data type
*		- 人 use [variable or address] → Com access [MEMORY → data]
*		- variable vs CONSTANT ← Identifier of Value
*		  variable > changeable > symbol
*		  CONSTANT > Un_changeable > *literal* or symbol
*		  int a = 1; ← variable = CONATANT;
*		   #define NAME value		// 전역 preprocess
*		   const int NAME = value;	// 지역 ♡ 자료형 지정가능
*		★ literal constant's default data type : INT DOUBLE
*			fix → 숫자접미사U(unsigned int), L(long), UL, F(float)
*		- sizeof(datatype) byte
*			정수 short2 int4 long4 longlong8 %d %ld
*				오버플로우조심
*			실수 float4 double8 longdouble8	%f %lf %e
*				적은비트로 넓은범위의실수를 커버하는 부동소수점방식
*				float32bit(부호1/23/지수8)약 유효숫자6
*				double64bit(부호1/52/지수11)약 유효숫자16
*				언더플로우:위가 짤림
*			문자 char1 %c
*				*ASCII* or UNI code
*				정수:문자 1:1대응
*				-128~-1 or 128~255 : 확장아스키코드
				0~31 : 제어(커서이동or경고음or etc..)
					알람/a 뒤/b 탭/t 개행/n 수직탭/v 폼피드/f 리턴/r
				32~127: 문자
*		- unsigned : 0 ~ (2^bit)-1  %u
*		* int : ±21억
*		- 정수 표현 : 2, 8, 10, 16진수
*			2진수>입출력X
*			*컴퓨터는 무조건 2진수switch, 음수:2의보수(bit반전+1)
*			8진수>입력:0값 출력:%o
*			10진수>그냥입력 %d, ld, lld u, lu, llu
*			16진수>입력:0x값 출력:%x
*			*16진수1자리=2진수4자리
*
* 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 01. print real number > 1. point 2. power
	double real;

	printf("real number >>____\b\b\b\b");
	scanf("%lf", &real);

	printf("use %%lf: %lf\n", real);
	printf("use %%le: %le\n", real);


	// 02. hexa → octa deci hexa
	int num1;
	printf("hexa >>__\b\b");
	scanf("%x", &num1);

	printf("octa >> %0#4o\n", num1);		// #:8진수 0표식
	printf("deci >> %04d\n", num1);
	printf("hexa >> %0#4x\n", num1);		// #:16진수 0x표식


	// 03. swap
	num1 = 10;
	int num2 = 20;
	int temp = num1;

	printf("NOW: %d\t%d\n", num1, num2);

	num1 = num2;
	num2 = temp;
	printf("SWP: %d\t%d\n", num1, num2);


	// 04. volume of a box
	double length, wide, height, volume;
	printf("wide length height >>");
	scanf("%lf %lf %lf", &wide, &length, &height);
	volume = length * wide * height;
	printf("volume >> %lf\n", volume);


	// 05. korean pyeong > square meter
	const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong, sqmeter;

	printf("pyeong >> ");
	scanf("%lf", &pyeong);
	sqmeter = pyeong * SQMETER_PER_PYEONG;
	printf("sqmeter >> %lf\n", sqmeter);


	// 06. calculate it
	float a = 3.32e-3;
	float b = 9.76e-8;
	printf("%f\n", a + b);


	// 07. Kinetic Energy
	double mass, speed, energy;
	printf("mass(kg): ");
	scanf("%lf", &mass);
	printf("speed(m/s): ");
	scanf("%lf", &speed);
	energy = 0.5 * mass * speed * speed;
	printf("energy(J): %lf\n", energy);


	// 08. int > ascii
	int int_ascii;
	printf("ascii code >> ");
	scanf("%d", &int_ascii);
	printf("ascii char >> %c\n", int_ascii);


	// 09. int > ascii (2)
	int_ascii = 'a';
	printf("%c %c %c\n", int_ascii + 1, int_ascii + 2, int_ascii + 3);


	// 10. alarm and alarm
	printf("\a\n");
	printf("fire exprosion\n");
	printf("\a\n");		//안울려...



	// 11. print it
	printf("\"ASCII code\"\, \'A\'\, \'B\'\, \'C\'\n\\t \\a \\n\n");
	return 0;
}