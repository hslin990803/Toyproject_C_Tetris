#include "init.h"
#include "config.h"
#include "gameManager.h"
#include "board.h"

void init() {
	hideCursor();
	
	setGameOver(0); // isGameOVer 0으로 초기화

	setGameBoard();
}

void setGameBoard() {
	// 좌우 벽 세팅
	for (int y = 0; y < MAX_HEIGHT; y++) {
		setCell(y, 0, WALL);
		setCell(y, MAX_WIDTH - 1, WALL);
	}
	// 맨 아래줄 세팅
	for (int x = 0; x < MAX_WIDTH; x++) {
		setCell(MAX_HEIGHT - 1, x, WALL);
	}
}