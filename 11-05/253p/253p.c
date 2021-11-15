#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// goto.c 3*1~9

	int i = 1;
	printf("-----THREE times table-----\n");

three_times_table:
	printf("%d * %d = %2d\n", 3, i, (3 * i));
	i++;
	if (i < 10) goto three_times_table;
	else goto back_to_nomal;

back_to_nomal:
	return 0;
}