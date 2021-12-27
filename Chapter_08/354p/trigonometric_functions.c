#include <stdio.h>
#include <windows.h>
#include <math.h>
#define PI 3.1415926535

double rad(double degree);

int main(void) {
	int degree, x, y, red, green, blue;
	double radian, result;

	srand((unsigned)time(NULL));
	HWND hwnd = GetForegroundWindow();	// Handle to a WiNDow
	HDC hdc = GetWindowDC(hwnd);		// Handle for Device Context

	MoveToEx(hdc, 30, 200, 0);			// ¿øÁ¡
	LineTo(hdc, 500, 200);				//
	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 30, 0);
	
	for (degree = 0; degree <= 360; degree++) {
		result = sin(rad((double)degree));
		x = degree + 30;	// xÁÂÇ¥
		y = 200 - (int)(100.0 * result);
		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}

	_getch();
	return 0;
}

double rad(double degree) {
	return PI * degree / 180;
}