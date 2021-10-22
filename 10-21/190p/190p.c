#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("0 && 1 >> %d\n", 0 && 1);
	printf("-1 && 1 >> %d\n", -1 && 1);
	printf("0 || 1 >> %d\n", 0 || 1);
	printf("-1 || 1 >> %d\n", -1 || 1);
	printf("! 1 >> %d\n", !1);
	printf("!-1 >> %d\n", !(-1));
	printf("! 0 >> %d\n", !0);
	
	// 0 is False. 
	// And, Everything else is True.

	return 0;
}