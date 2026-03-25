#include "board.h"
#include "config.h"

static int board[MAX_HEIGHT][MAX_WIDTH] = { 0 };		// 게임보드

// 벽 세팅
void initGameBoard() {
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

int getCell(int y, int x) {
	return board[y][x];
}

void setCell(int y, int x, int value) {
	board[y][x] = value;
}