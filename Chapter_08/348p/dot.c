#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(void) {
	int x, y, red, green, blue;
	srand((unsigned)time(NULL));

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	for (int i = 0; i < 10000; i++) {
		x = rand() % 300;
		y = rand() % 300;

		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
		Sleep(50);
	}
	_getch();
	return 0;
}