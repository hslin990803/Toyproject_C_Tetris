#include <stdlib.h> // rand() 사용
#include <time.h> // time() 사용
#include <Windows.h>

#include "util.h"

// 좌표 출력
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 커서 지우기
void hideCursor() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(hConsole, &cursorInfo);   // 현재 커서 정보 가져오기
	cursorInfo.bVisible = FALSE;                   // 커서 안 보이게 설정
	SetConsoleCursorInfo(hConsole, &cursorInfo);   // 설정 적용
}