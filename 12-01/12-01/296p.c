#include <stdio.h>

int main(void) {

	int a, b, c;	// base밑변, height높이, hypotenuse빗변
	int i=0;
	
	printf("[각 변이 100이하의 정수인 직각삼각형 찾기]\n");
	printf("        빗변\t\t        빗변\n");

	for (a = 1; a < 101; a++)
		for (b = a; b < 101; b++)
			for (c = 1; ((a + b) > c) && (c < 101); c++)
				if (c * c == (a * a + b * b)) {
					printf("%3d %3d %3d\t\t", a, b, c);
					i++;
					if (i == 2) {
						printf("\n");
						i = 0;
					}
					
				}
	return 0;
}