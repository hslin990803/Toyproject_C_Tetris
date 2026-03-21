#ifndef _UTIL_H_
#define _UTIL_H_
#endif 

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void hideCursor() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(hConsole, &cursorInfo);   // 현재 커서 정보 가져오기
	cursorInfo.bVisible = FALSE;                   // 커서 안 보이게 설정
	SetConsoleCursorInfo(hConsole, &cursorInfo);   // 설정 적용
}