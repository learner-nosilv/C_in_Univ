#include <stdio.h>

void print_stars();

int main(void) {
	print_stars();
	printf("Hello world\n");
	print_stars();
	return 0;
}

void print_stars() {
	for (int i = 0; i < 30; i++)
		printf("*");
	printf("\n");
	return;
}