#include <stdio.h>

int main(void)
{
	printf("AND : %08X\n", 0x9 & 0xA);	// 1001 & 1010 = 1000 (0x8)
	printf(" OR : %08X\n", 0x9 | 0xA);	// 1001 | 1010 = 1011 (0xB)
	printf("XOR : %08X\n", 0x9 ^ 0xA);	// 1001 ^ 1010 = 0011 (0x3) 
	printf("NOT : %08X\n", ~0x9);		// ~1001 = 0110 (0x6)
	printf("NOT : %d\n", ~0x9);			// ~1001 = -10
										// * -9 = (~9) + 1
	printf("<<  : %08X\n", 0x4 << 1);	// 4 * (2^1) = 1000 (0x8)
	printf(" >> : %08X\n", 0x4 >> 1);	// 4 * (2^-1) = 0010 (0x2)
	return 0;
}