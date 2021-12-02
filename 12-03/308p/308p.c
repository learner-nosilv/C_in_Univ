#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());	// HDC(Handler Device Context)
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {					// 100�� �׸���
		int x = rand() % 800;		// �������� x��ǥ 0~999
		int y = rand() % 800;		// �������� y��ǥ 0~999
		int w = rand() % 200 + 1;	// ���α��� 1~10
		int h = rand() % 200 + 1;	// ���α��� 1~10
		Ellipse(hdc, x, y, x + w, y + h);
		Sleep(500);
	}
	return 0;
}