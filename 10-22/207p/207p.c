#include <stdio.h>

int main(void)
{
	int i;
	double f;

	printf("f = 5 / 4 >> %f\n", f = 5 / 4); 
	// int(5) / int(4) = int(1) ¡æ double(1.000000)

	printf("f = (double) 5 / 4 >> %f\n", f = (double)5 / 4);
	// double(5.) / int (4) = double(1.) ¡æ double(1.250000)

	printf("f = 5.0 / 4 >> %f\n", f = 5.0 / 4);
	// double(5.) / int (4) = double(1.) ¡æ double(1.250000)

	printf("f = (double) 5 / (double) 4 >> %f\n", f = (double)5 /(double)4);
	// double(5.) / double (4.) = double(1.) ¡æ double(1.250000)
	
	printf("i = 1.3 + 1.8 >> %d\n", i = (1.3 + 1.8));
	// double(1.3) + double(1.8) = double(3.1) ¡æ int(3)

	printf("i = (int)1.3 + (int)1.8 >> %d\n", i = (int)1.3 + (int)1.8);
	// int(1) + int(1) = int(2) ¡æ int(2)
	return 0;
}