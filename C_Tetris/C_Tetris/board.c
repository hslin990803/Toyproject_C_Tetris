#include "board.h"
#include "config.h"

static int board[MAX_HEIGHT][MAX_WIDTH] = { 0 };		// 게임보드

int getCell(int y, int x) {
	return board[y][x];
}

void setCell(int y, int x, int value) {
	board[y][x] = value;
}