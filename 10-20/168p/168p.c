/*
*	Chapter4. Variable & Data type
*		- �� use [variable or address] �� Com access [MEMORY �� data]
*		- variable vs CONSTANT �� Identifier of Value
*		  variable > changeable > symbol
*		  CONSTANT > Un_changeable > *literal* or symbol
*		  int a = 1; �� variable = CONATANT;
*		   #define NAME value		// ���� preprocess
*		   const int NAME = value;	// ���� �� �ڷ��� ��������
*		�� literal constant's default data type : INT DOUBLE
*			fix �� �������̻�U(unsigned int), L(long), UL, F(float)
*		- sizeof(datatype) byte
*			���� short2 int4 long4 longlong8 %d %ld
*				�����÷ο�����
*			�Ǽ� float4 double8 longdouble8	%f %lf %e
*				������Ʈ�� ���������ǽǼ��� Ŀ���ϴ� �ε��Ҽ������
*				float32bit(��ȣ1/23/����8)�� ��ȿ����6
*				double64bit(��ȣ1/52/����11)�� ��ȿ����16
*				����÷ο�:���� ©��
*			���� char1 %c
*				*ASCII* or UNI code
*				����:���� 1:1����
*				-128~-1 or 128~255 : Ȯ��ƽ�Ű�ڵ�
				0~31 : ����(Ŀ���̵�or�����or etc..)
					�˶�/a ��/b ��/t ����/n ������/v ���ǵ�/f ����/r
				32~127: ����
*		- unsigned : 0 ~ (2^bit)-1  %u
*		* int : ��21��
*		- ���� ǥ�� : 2, 8, 10, 16����
*			2����>�����X
*			*��ǻ�ʹ� ������ 2����switch, ����:2�Ǻ���(bit����+1)
*			8����>�Է�:0�� ���:%o
*			10����>�׳��Է� %d, ld, lld u, lu, llu
*			16����>�Է�:0x�� ���:%x
*			*16����1�ڸ�=2����4�ڸ�
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


	// 02. hexa �� octa deci hexa
	int num1;
	printf("hexa >>__\b\b");
	scanf("%x", &num1);

	printf("octa >> %0#4o\n", num1);		// #:8���� 0ǥ��
	printf("deci >> %04d\n", num1);
	printf("hexa >> %0#4x\n", num1);		// #:16���� 0xǥ��


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
	printf("\a\n");		//�ȿ��...



	// 11. print it
	printf("\"ASCII code\"\, \'A\'\, \'B\'\, \'C\'\n\\t \\a \\n\n");
	return 0;
}